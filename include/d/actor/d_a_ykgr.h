//
// Created by kris on 04/10/23.
//

#ifndef TWW_D_A_YKGR_H
#define TWW_D_A_YKGR_H

struct daYkgr_c {
public:
    static void stop() {
        if (m_emitter) {
            m_alpha_flag = 0;
        }
    };
    
    static JPABaseEmitter* m_emitter;
    static u8 m_alpha_flag;
public:

};

extern daYkgr_c daYkgr_c_class;



#endif  // TWW_D_A_YKGR_H
