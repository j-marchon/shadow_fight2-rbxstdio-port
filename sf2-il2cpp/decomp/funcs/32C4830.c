// FEPCHKMAIBL$$NDCCCHJDNFP @ RVA 0x32C4830

void FEPCHKMAIBL__NDCCCHJDNFP
               (HOOAAGABMBL_o *ANMFBABEMFD,System_Action_int__int__o *HLBLIDOPBJJ,MethodInfo *method
               )

{
  System_String_o **ppSVar1;
  System_String_o *format;
  System_Object_array *args;
  long lVar2;
  HOOAAGABMBL_o **ppHVar3;
  System_Action_o *pSVar4;
  System_Action_o **ppSVar5;
  System_Action_int__int__o **ppSVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar7;
  System_String_o *pSVar8;
  
                    /* try { // try from 033c484c to 034c4947 has its CatchHandler @ 033c484c
                       catch() { ... } // from try @ 033c484c with catch @ 033c484c
                       catch() { ... } // from try @ 033c49a8 with catch @ 033c484c
                       catch() { ... } // from try @ 033c49e0 with catch @ 033c484c
                       catch() { ... } // from try @ 033c4a1c with catch @ 033c484c
                       catch() { ... } // from try @ 033c4a4c with catch @ 033c484c */
  if ((DAT_045674e8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_FEPCHKMAIBL_HNCHAGOGMBL__);
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_19925);
    FUN_01bab630(&StringLiteral_15588);
    DAT_045674e8 = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  format = StringLiteral_15588;
  ppSVar1 = (System_String_o **)&StringLiteral_19925;
  if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
    ppSVar1 = &(ANMFBABEMFD->fields)._COIPKAKHDFP_k__BackingField;
  }
  if (args != (System_Object_array *)0x0) {
    pSVar8 = *ppSVar1;
    if ((pSVar8 != (System_String_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c49dc with catch @ 033c49ec
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c49a0 with catch @ 033c49f0
                        */
      FUN_01bab798(uVar7,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar8;
      thunk_FUN_01c20e04(args->m_Items,pSVar8);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033c4948 to 034c494f has its CatchHandler @ 033c4a00 */
      UnityEngine_Debug__LogFormat(format,args,(MethodInfo *)0x0);
      if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppHVar3 = &FEPCHKMAIBL_TypeInfo->static_fields->AIGNPODKOAH;
      *ppHVar3 = ANMFBABEMFD;
      thunk_FUN_01c20e04(ppHVar3,ANMFBABEMFD);
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 033c4990 to 034c499b has its CatchHandler @ 033c49f8 */
      System_Action___ctor();
                    /* try { // try from 033c49a0 to 034c49a7 has its CatchHandler @ 033c49f0 */
                    /* try { // try from 033c49a8 to 034c49d3 has its CatchHandler @ 033c484c */
      ppSVar5 = &FEPCHKMAIBL_TypeInfo->static_fields->OBDBCPILHKI;
      *ppSVar5 = pSVar4;
      thunk_FUN_01c20e04(ppSVar5,pSVar4);
      ppSVar6 = &FEPCHKMAIBL_TypeInfo->static_fields->HILLNHJFECF;
      *ppSVar6 = HLBLIDOPBJJ;
      method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar6,HLBLIDOPBJJ);
      FEPCHKMAIBL__LJGJPNGHGGM(method_00);
                    /* try { // try from 033c49d4 to 034c49d7 has its CatchHandler @ 033c49fc */
                    /* try { // try from 033c49d8 to 034c49db has its CatchHandler @ 033c49f4 */
                    /* try { // try from 033c49dc to 034c49df has its CatchHandler @ 033c49ec */
      FEPCHKMAIBL__POBKBKBKBEM(method_01);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033c49e0 to 034c4a17 has its CatchHandler @ 033c484c */
  FUN_01bab8c8();
}

