// HPGLFPGOBFM$$AJJLBBCJAAL @ RVA 0x3214124

System_String_o *
HPGLFPGOBFM__AJJLBBCJAAL(HPGLFPGOBFM_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_Nullable_bool__o SVar1;
  System_Nullable_float__o SVar2;
  System_Nullable_int__o SVar3;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar4;
  float PNEIGGOFIOA;
  
                    /* try { // try from 03314138 to 0341426b has its CatchHandler @ 03314138
                       catch() { ... } // from try @ 03314138 with catch @ 03314138
                       catch() { ... } // from try @ 03314298 with catch @ 03314138
                       catch() { ... } // from try @ 03314368 with catch @ 03314138
                       catch() { ... } // from try @ 03314394 with catch @ 03314138
                       catch() { ... } // from try @ 033143c8 with catch @ 03314138 */
  if ((DAT_04566eaa & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6094);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6095);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    DAT_04566eaa = 1;
  }
  SVar2 = AJAMDCEKAFE__FOKFAIPDIMB(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  SVar1 = AJAMDCEKAFE__FAEBPLENEGK(1,OPAEPDIIOEB,(MethodInfo *)0x0);
  SVar3 = AJAMDCEKAFE__NANCFCIGNEE(2,OPAEPDIIOEB,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
    PNEIGGOFIOA = 5.0;
    if (((ulong)SVar2.fields & 0xff) != 0) {
      PNEIGGOFIOA = SVar2.fields.value;
    }
    Nekki_SF2_GUI_Dialogs_NotificationsGame__ShowDebugNotification
              (__this_00,PNEIGGOFIOA,
               ((ushort)SVar1.fields & 0xff) == 0 || ((ushort)SVar1.fields & 0xff00) != 0,
               SVar3.fields.value,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6094,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0331426c to 03414273 has its CatchHandler @ 0331437c */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6095,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03314294 to 03414297 has its CatchHandler @ 03314378 */
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03314298 to 0341435b has its CatchHandler @ 03314138 */
  FUN_01bab8c8();
}

