// MKFAKELPPAC$$KIDKEFPHLAN @ RVA 0x3317FF8

void MKFAKELPPAC__KIDKEFPHLAN(MKFAKELPPAC_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  int BKFOLMBMFNP_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  MethodInfo *in_x3;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  int32_t local_44;
  
  if ((DAT_045677ed & 1) == 0) {
                    /* try { // try from 03418048 to 0351804f has its CatchHandler @ 03418088 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6563);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6564);
                    /* try { // try from 03418058 to 0351805f has its CatchHandler @ 03418084 */
                    /* try { // try from 03418060 to 0351809f has its CatchHandler @ 03417fbc */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    DAT_045677ed = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03418058 with catch @ 03418084
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03418048 with catch @ 03418088
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6563,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034180a0 to 035180a3 has its CatchHandler @ 034180c4 */
                    /* try { // try from 034180a4 to 035180cb has its CatchHandler @ 03417fbc */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6564,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034180a0 with catch @ 034180c4 */
  local_44 = BKFOLMBMFNP;
                    /* try { // try from 034180cc to 035180d3 has its CatchHandler @ 034180e8 */
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_44);
                    /* try { // try from 034180d4 to 035180df has its CatchHandler @ 03417fbc */
                    /* try { // try from 034180e0 to 035180e7 has its CatchHandler @ 034180e8 */
  pSVar1 = System_String__Format(pSVar1,arg0,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034180cc with catch @ 034180e8
                       catch(type#2 @ 00000000) { ... } // from try @ 034180e0 with catch @ 034180e8
                        */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).NEKJNNBFECK;
  if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,BKFOLMBMFNP,
               (pSVar2->fields).super.super.method);
  }
  BKFOLMBMFNP_00 = (__this->fields).AHLHIFAMFCA;
  if ((BKFOLMBMFNP_00 != 0) && ((__this->fields).IFHOPILFOGO == false)) {
    MKFAKELPPAC__BFCCEGGDJEF(__this,BKFOLMBMFNP_00,false,in_x3);
  }
  return;
}

