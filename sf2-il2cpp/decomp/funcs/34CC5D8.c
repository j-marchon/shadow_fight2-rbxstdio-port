// GOJLGHMMDBO$$.ctor @ RVA 0x34CC5D8

void GOJLGHMMDBO___ctor(GOJLGHMMDBO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  ILHHCILGBCB_o *__this_00;
  ILHHCILGBCB_o **ppIVar2;
  IJBEKFLAPNK_o *__this_01;
  IJBEKFLAPNK_o **ppIVar3;
  System_Collections_Generic_List_IHMIMECHIAN__o *__this_02;
  System_Collections_Generic_List_IHMIMECHIAN__o **ppSVar4;
  System_Collections_Generic_List_BJEFHIBMHEJ__o *__this_03;
  System_Collections_Generic_List_BJEFHIBMHEJ__o **ppSVar5;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035cc5e4 to 036cc5ef has its CatchHandler @ 035cc6a8 */
                    /* try { // try from 035cc5f0 to 036cc683 has its CatchHandler @ 035cc398 */
  if ((DAT_04568679 & 1) == 0) {
    FUN_01bab630(&IJBEKFLAPNK_TypeInfo);
    FUN_01bab630(&ILHHCILGBCB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BJEFHIBMHEJ>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHMIMECHIAN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<BJEFHIBMHEJ>_TypeInfo);
    DAT_04568679 = 1;
    method = extraout_x1;
  }
  pSVar1 = GOJLGHMMDBO__ALJPINHKMFK(0,method);
                    /* try { // try from 035cc684 to 036cc68b has its CatchHandler @ 035cc6d4 */
                    /* try { // try from 035cc68c to 036cc68f has its CatchHandler @ 035cc6c4 */
  (__this->fields).IMHCBMGEIDH = pSVar1;
                    /* try { // try from 035cc690 to 036cc693 has its CatchHandler @ 035cc6c0 */
  thunk_FUN_01c20e04();
                    /* try { // try from 035cc694 to 036cc697 has its CatchHandler @ 035cc398 */
                    /* try { // try from 035cc698 to 036cc69b has its CatchHandler @ 035cc6a4 */
  __this_00 = (ILHHCILGBCB_o *)thunk_FUN_01bda818(ILHHCILGBCB_TypeInfo);
                    /* try { // try from 035cc69c to 036cc6e3 has its CatchHandler @ 035cc398 */
                    /* catch() { ... } // from try @ 035cc698 with catch @ 035cc6a4 */
  ILHHCILGBCB___ctor(__this_00,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields).BHPMOKPBIOL;
                    /* catch() { ... } // from try @ 035cc5e4 with catch @ 035cc6a8 */
                    /* catch() { ... } // from try @ 035cc5cc with catch @ 035cc6ac */
  *ppIVar2 = __this_00;
                    /* catch() { ... } // from try @ 035cc598 with catch @ 035cc6b0 */
                    /* catch() { ... } // from try @ 035cc5b4 with catch @ 035cc6b4 */
  thunk_FUN_01c20e04(ppIVar2,__this_00);
                    /* catch() { ... } // from try @ 035cc554 with catch @ 035cc6b8 */
                    /* catch() { ... } // from try @ 035cc584 with catch @ 035cc6bc */
  __this_01 = (IJBEKFLAPNK_o *)thunk_FUN_01bda818(IJBEKFLAPNK_TypeInfo);
                    /* catch() { ... } // from try @ 035cc690 with catch @ 035cc6c0 */
                    /* catch() { ... } // from try @ 035cc68c with catch @ 035cc6c4 */
                    /* catch() { ... } // from try @ 035cc574 with catch @ 035cc6c8 */
  IJBEKFLAPNK___ctor(__this_01,(MethodInfo *)0x0);
  ppIVar3 = &(__this->fields).GCJEKKJNOPH;
                    /* catch() { ... } // from try @ 035cc4ec with catch @ 035cc6cc */
                    /* catch() { ... } // from try @ 035cc490 with catch @ 035cc6d0 */
  *ppIVar3 = __this_01;
                    /* catch() { ... } // from try @ 035cc684 with catch @ 035cc6d4 */
  thunk_FUN_01c20e04(ppIVar3,__this_01);
  __this_02 = (System_Collections_Generic_List_IHMIMECHIAN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IHMIMECHIAN>_TypeInfo);
                    /* try { // try from 035cc6e4 to 036cc6e7 has its CatchHandler @ 035cc6f8 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<IHMIMECHIAN>__ctor__);
  ppSVar4 = &(__this->fields).CIMKDFKBOKC;
  *ppSVar4 = __this_02;
                    /* catch() { ... } // from try @ 035cc6e4 with catch @ 035cc6f8 */
  thunk_FUN_01c20e04(ppSVar4,__this_02);
                    /* try { // try from 035cc700 to 036cc767 has its CatchHandler @ 035cc77c */
  __this_03 = (System_Collections_Generic_List_BJEFHIBMHEJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BJEFHIBMHEJ>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             Method_System_Collections_Generic_List<BJEFHIBMHEJ>__ctor__);
  ppSVar5 = &(__this->fields).INGEFFGPJPB;
  *ppSVar5 = __this_03;
  thunk_FUN_01c20e04(ppSVar5,__this_03);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

