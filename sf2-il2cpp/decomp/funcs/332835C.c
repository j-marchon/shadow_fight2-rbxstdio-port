// PCEDNFLCPPF$$OEEIILHCCBI @ RVA 0x332835C

void PCEDNFLCPPF__OEEIILHCCBI(PCEDNFLCPPF_o *__this,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  SimpleJSON_JSONNode_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0342835c to 0352835f has its CatchHandler @ 03428380 */
  method_00 = (MethodInfo *)(ulong)(uint)DFIBGGDJPLM;
                    /* try { // try from 03428360 to 03528363 has its CatchHandler @ 0342837c */
                    /* try { // try from 03428364 to 03528367 has its CatchHandler @ 03428378 */
                    /* try { // try from 03428368 to 0352839b has its CatchHandler @ 034281ec */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034282d4 with catch @ 0342836c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034282e0 with catch @ 03428370
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03428314 with catch @ 03428374
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03428364 with catch @ 03428378
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03428360 with catch @ 0342837c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342835c with catch @ 03428380
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034282ac with catch @ 03428384
                        */
  if ((DAT_045678aa & 1) == 0) {
                    /* try { // try from 0342839c to 0352839f has its CatchHandler @ 034283c8 */
                    /* try { // try from 034283a0 to 035283cf has its CatchHandler @ 034281ec */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3055);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3056);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3057);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3058);
                    /* catch() { ... } // from try @ 0342839c with catch @ 034283c8 */
                    /* try { // try from 034283d0 to 035283d7 has its CatchHandler @ 034283ec */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 034283d8 to 035283e3 has its CatchHandler @ 034281ec */
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
                    /* try { // try from 034283e4 to 035283eb has its CatchHandler @ 034283ec */
    DAT_045678aa = 1;
    method_00 = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034283d0 with catch @ 034283ec
                       catch(type#2 @ 00000000) { ... } // from try @ 034283e4 with catch @ 034283ec
                        */
  pSVar2 = PCEDNFLCPPF__GAIEEOLGFKA(__this,method_00);
                    /* try { // try from 034283f0 to 035286f7 has its CatchHandler @ 034283f0
                       catch() { ... } // from try @ 034283f0 with catch @ 034283f0
                       catch() { ... } // from try @ 03428834 with catch @ 034283f0
                       catch() { ... } // from try @ 034288d8 with catch @ 034283f0
                       catch() { ... } // from try @ 034288e0 with catch @ 034283f0
                       catch() { ... } // from try @ 03428994 with catch @ 034283f0 */
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3055,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3056,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (pSVar2 != (SimpleJSON_JSONNode_o *)0x0) {
    pSVar6 = (SimpleJSON_JSONNode_o *)
             (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,pSVar5,(pSVar2->klass->vtable)._7_get_Item.method);
    iVar1 = OGMFFOMHGIA__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3057,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3058,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar6 = SimpleJSON_JSONNode__op_Implicit(iVar1 + DFIBGGDJPLM,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03428514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
              (pSVar2,pSVar5,pSVar6,(pSVar2->klass->vtable)._8_set_Item.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

