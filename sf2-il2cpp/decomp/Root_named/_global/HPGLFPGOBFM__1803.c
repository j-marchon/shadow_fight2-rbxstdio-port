// TypeDefIndex 1803
// Namespace: 
// public class HPGLFPGOBFM : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3213FB4]
// HPGLFPGOBFM$$DLKKPFHKIPB @ RVA 0x3213FB4

System_Collections_Generic_IEnumerable_string__o *
HPGLFPGOBFM__DLKKPFHKIPB(HPGLFPGOBFM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566ea9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6092);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6093);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566ea9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6092,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6093,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3214124]
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


// ===== public bool ECKDICODLME()  [RVA 0x321429C]
// HPGLFPGOBFM$$ECKDICODLME @ RVA 0x321429C

bool HPGLFPGOBFM__ECKDICODLME(HPGLFPGOBFM_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public void .ctor()  [RVA 0x32142A4]
// HPGLFPGOBFM$$.ctor @ RVA 0x32142A4

void HPGLFPGOBFM___ctor(HPGLFPGOBFM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x32142AC]
// HPGLFPGOBFM$$KCBILPIAPHN @ RVA 0x32142AC

int32_t HPGLFPGOBFM__KCBILPIAPHN(HPGLFPGOBFM_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x32142B4]
// HPGLFPGOBFM$$IGMDDJFPIJL @ RVA 0x32142B4

System_String_o * HPGLFPGOBFM__IGMDDJFPIJL(HPGLFPGOBFM_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566eab & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_75);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6096);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566eab = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6096,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_75,(MethodInfo *)0x0);
                    /* try { // try from 0331435c to 0341435f has its CatchHandler @ 03314374 */
                    /* try { // try from 03314360 to 03414363 has its CatchHandler @ 03314370 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

