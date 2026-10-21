// IHMIMECHIAN$$Equals @ RVA 0x343D094

bool IHMIMECHIAN__Equals(IHMIMECHIAN_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045681ea & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    DAT_045681ea = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cfb4 with catch @ 0353d0e4
                        */
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else {
                    /* try { // try from 0353d0c8 to 0363d0cb has its CatchHandler @ 0353d0d4 */
                    /* try { // try from 0353d0cc to 0363d0fb has its CatchHandler @ 0353c70c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353d0c8 with catch @ 0353d0d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cfd0 with catch @ 0353d0d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cfd4 with catch @ 0353d0dc
                        */
    if (IBKIPBJJCPG->klass != (Il2CppClass *)IHMIMECHIAN_TypeInfo) {
      IBKIPBJJCPG = (Il2CppObject *)0x0;
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cf78 with catch @ 0353d0e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cf1c with catch @ 0353d0ec
                        */
  bVar1 = IHMIMECHIAN__Equals(__this,(IHMIMECHIAN_o *)IBKIPBJJCPG,method);
  return bVar1;
}

