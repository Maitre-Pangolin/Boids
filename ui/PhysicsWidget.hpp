
#pragma once

#include<memory>
#include "Physics.hpp"

namespace UI {

    class PhysicsWidget {
        public:
        PhysicsWidget(std::shared_ptr<Core::Physics> physicsEngine ) : m_physicsEngine(physicsEngine) {};
        ~PhysicsWidget() = default;

        virtual void display() = 0;

        protected:
            std::shared_ptr<Core::Physics> m_physicsEngine;
    };

    class BoidsWidget : public PhysicsWidget {
        public:
        BoidsWidget(std::shared_ptr<Core::Physics> physicsEngine ) : PhysicsWidget(physicsEngine) {};
        ~BoidsWidget() = default;

        void display() override;
    };
}