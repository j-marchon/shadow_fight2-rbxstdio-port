// FPMAFHGLPOB$$EIDEBMKLLMO @ RVA 0x320DEE8

void FPMAFHGLPOB__EIDEBMKLLMO
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  int32_t n;
  OLKPEJMEBPJ_o *__this;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  OOMHDDBCBJP_o *pOVar3;
  
  if ((DAT_04566e7d & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3429);
                    /* try { // try from 0330df1c to 0340df27 has its CatchHandler @ 0330df6c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3430);
                    /* try { // try from 0330df28 to 0340df57 has its CatchHandler @ 0330dde8 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e7d = 1;
  }
                    /* try { // try from 0330df58 to 0340df5f has its CatchHandler @ 0330df7c */
                    /* try { // try from 0330df60 to 0340df63 has its CatchHandler @ 0330df74 */
                    /* try { // try from 0330df64 to 0340df67 has its CatchHandler @ 0330df70 */
  n = 0;
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
                    /* try { // try from 0330df68 to 0340df93 has its CatchHandler @ 0330dde8 */
    pOVar3 = (FBFPLEFCDOK->fields).IFJLLGPGMHM;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330df1c with catch @ 0330df6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330df64 with catch @ 0330df70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330df60 with catch @ 0330df74
                        */
    if ((pOVar3 == (OOMHDDBCBJP_o *)0x0) ||
       (__this = (pOVar3->fields).LFJPDELEIHG, __this == (OLKPEJMEBPJ_o *)0x0)) {
      n = 0;
    }
    else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330ded0 with catch @ 0330df78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330df58 with catch @ 0330df7c
                        */
      n = OLKPEJMEBPJ__LIIDJOLDBBF(__this,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 0330df94 to 0340df97 has its CatchHandler @ 0330dfb8 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330df98 to 0340dfbf has its CatchHandler @ 0330dde8 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3429,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0330df94 with catch @ 0330dfb8 */
                    /* try { // try from 0330dfc0 to 0340dfc7 has its CatchHandler @ 0330dfdc */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3430,(MethodInfo *)0x0);
                    /* try { // try from 0330dfc8 to 0340dfd3 has its CatchHandler @ 0330dde8 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* try { // try from 0330dfd4 to 0340dfdb has its CatchHandler @ 0330dfdc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0330dfc0 with catch @ 0330dfdc
                       catch(type#2 @ 00000000) { ... } // from try @ 0330dfd4 with catch @ 0330dfdc
                        */
                    /* try { // try from 0330dfe0 to 0340e07f has its CatchHandler @ 0330dfe0
                       catch() { ... } // from try @ 0330dfe0 with catch @ 0330dfe0
                       catch() { ... } // from try @ 0330e0bc with catch @ 0330dfe0
                       catch() { ... } // from try @ 0330e134 with catch @ 0330dfe0
                       catch() { ... } // from try @ 0330e160 with catch @ 0330dfe0
                       catch() { ... } // from try @ 0330e190 with catch @ 0330dfe0 */
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar2 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0330e020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar1,pSVar2,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

