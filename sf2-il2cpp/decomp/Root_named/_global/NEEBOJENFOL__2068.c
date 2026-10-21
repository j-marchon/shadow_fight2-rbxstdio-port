// TypeDefIndex 2068
// Namespace: 
// public class NEEBOJENFOL : IEJKLPPLHMO
// Fields:

// ===== public void .ctor()  [RVA 0x32B97F4]
// NEEBOJENFOL$$.ctor @ RVA 0x32B97F4

void NEEBOJENFOL___ctor(NEEBOJENFOL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ECKDICODLME()  [RVA 0x32B97FC]
// NEEBOJENFOL$$ECKDICODLME @ RVA 0x32B97FC

bool NEEBOJENFOL__ECKDICODLME(NEEBOJENFOL_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x32B9804]
// NEEBOJENFOL$$DLKKPFHKIPB @ RVA 0x32B9804

System_Collections_Generic_IEnumerable_string__o *
NEEBOJENFOL__DLKKPFHKIPB(NEEBOJENFOL_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 033b9810 to 034b98f3 has its CatchHandler @ 033b9498 */
  if ((DAT_04567479 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4517);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4518);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567479 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4517,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4518,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                    /* try { // try from 033b98f4 to 034b98fb has its CatchHandler @ 033b9924 */
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 033b98fc to 034b990f has its CatchHandler @ 033b9930 */
    pSVar3 = (__this_00->fields)._items;
                    /* try { // try from 033b9910 to 034b9913 has its CatchHandler @ 033b9498 */
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* try { // try from 033b9914 to 034b9917 has its CatchHandler @ 033b9920 */
    if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 033b9918 to 034b9943 has its CatchHandler @ 033b9498 */
      uVar1 = (__this_00->fields)._size;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b9914 with catch @ 033b9920
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b98f4 with catch @ 033b9924
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b975c with catch @ 033b9928
                        */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b9700 with catch @ 033b992c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b98fc with catch @ 033b9930
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b97c4 with catch @ 033b9934
                        */
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
                    /* try { // try from 033b9944 to 034b9947 has its CatchHandler @ 033b995c */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* catch() { ... } // from try @ 033b9944 with catch @ 033b995c */
                    /* try { // try from 033b9964 to 034b99cb has its CatchHandler @ 033b99e0 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string IGMDDJFPIJL()  [RVA 0x32B9974]
// NEEBOJENFOL$$IGMDDJFPIJL @ RVA 0x32B9974

System_String_o * NEEBOJENFOL__IGMDDJFPIJL(NEEBOJENFOL_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_0456747a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4519);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4520);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 033b99cc to 034b99d7 has its CatchHandler @ 033b9498 */
    DAT_0456747a = 1;
  }
                    /* try { // try from 033b99d8 to 034b99df has its CatchHandler @ 033b99e0 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b9964 with catch @ 033b99e0
                       catch(type#2 @ 00000000) { ... } // from try @ 033b99d8 with catch @ 033b99e0
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4519,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4520,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x32B9A24]
// NEEBOJENFOL$$AJJLBBCJAAL @ RVA 0x32B9A24

System_String_o *
NEEBOJENFOL__AJJLBBCJAAL(NEEBOJENFOL_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_String_array *extraout_x1;
  
  if ((DAT_0456747b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4521);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4522);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_0456747b = 1;
    OPAEPDIIOEB = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,OPAEPDIIOEB);
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI__Clear((MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4521,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4522,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x32B9AF8]
// NEEBOJENFOL$$KCBILPIAPHN @ RVA 0x32B9AF8

int32_t NEEBOJENFOL__KCBILPIAPHN(NEEBOJENFOL_o *__this,MethodInfo *method)

{
  return 0;
}

