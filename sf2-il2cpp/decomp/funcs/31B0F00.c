// IGPDCHBJAPD$$.ctor @ RVA 0x31B0F00

void IGPDCHBJAPD___ctor(IGPDCHBJAPD_o *__this,MethodInfo *method)

{
  IGPDCHBJAPD_JMPAGIGEFME_o *__this_00;
  IGPDCHBJAPD_JMPAGIGEFME_o **ppIVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
                    /* try { // try from 032b0f00 to 033b0f03 has its CatchHandler @ 032b0c04 */
                    /* try { // try from 032b0f04 to 033b0f07 has its CatchHandler @ 032b0f24 */
                    /* try { // try from 032b0f08 to 033b0f0f has its CatchHandler @ 032b0c04 */
                    /* try { // try from 032b0f10 to 033b0f13 has its CatchHandler @ 032b0f1c */
                    /* try { // try from 032b0f14 to 033b0f17 has its CatchHandler @ 032b0f20 */
                    /* catch() { ... } // from try @ 032b0e30 with catch @ 032b0f18
                       try { // try from 032b0f18 to 033b0f63 has its CatchHandler @ 032b0c04 */
                    /* catch() { ... } // from try @ 032b0f10 with catch @ 032b0f1c */
                    /* catch() { ... } // from try @ 032b0e4c with catch @ 032b0f20
                       catch() { ... } // from try @ 032b0f14 with catch @ 032b0f20 */
                    /* catch() { ... } // from try @ 032b0f04 with catch @ 032b0f24 */
                    /* catch() { ... } // from try @ 032b0efc with catch @ 032b0f28 */
                    /* catch() { ... } // from try @ 032b0ef8 with catch @ 032b0f2c */
                    /* catch() { ... } // from try @ 032b0ef4 with catch @ 032b0f30 */
  if ((DAT_04566b74 & 1) == 0) {
                    /* catch() { ... } // from try @ 032b0dd0 with catch @ 032b0f34 */
                    /* catch() { ... } // from try @ 032b0de0 with catch @ 032b0f38 */
                    /* catch() { ... } // from try @ 032b0dec with catch @ 032b0f3c */
    FUN_01bab630(&IGPDCHBJAPD_JMPAGIGEFME_TypeInfo);
                    /* catch() { ... } // from try @ 032b0dfc with catch @ 032b0f40 */
                    /* catch() { ... } // from try @ 032b0d68 with catch @ 032b0f44 */
                    /* catch() { ... } // from try @ 032b0d0c with catch @ 032b0f48 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
                    /* catch() { ... } // from try @ 032b0eec with catch @ 032b0f4c */
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    DAT_04566b74 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032b0f64 to 033b0f67 has its CatchHandler @ 032b0f74 */
  (__this->fields).BLKENLJGDIE = -2;
  auVar3 = thunk_FUN_01bda818(IGPDCHBJAPD_JMPAGIGEFME_TypeInfo,method);
  __this_00 = auVar3._0_8_;
                    /* catch() { ... } // from try @ 032b0f64 with catch @ 032b0f74 */
  IGPDCHBJAPD_JMPAGIGEFME___ctor(__this_00,auVar3._8_8_);
  ppIVar1 = &(__this->fields).GIIFANGGEHM;
                    /* try { // try from 032b0f7c to 033b0fe3 has its CatchHandler @ 032b0ff8 */
  *ppIVar1 = __this_00;
  thunk_FUN_01c20e04(ppIVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).MFFLIEILKFC;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

