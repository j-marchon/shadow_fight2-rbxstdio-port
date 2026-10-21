// TypeDefIndex 1455
// Namespace: 
// public class CGOBMFJEDCI : IEJKLPPLHMO
// Fields:

// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x318DFEC]
// CGOBMFJEDCI$$AJJLBBCJAAL @ RVA 0x318DFEC

System_String_o *
CGOBMFJEDCI__AJJLBBCJAAL(CGOBMFJEDCI_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)FUN_03f939e0(DAT_04566a26);
  return pSVar1;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x318E100]
// CGOBMFJEDCI$$KCBILPIAPHN @ RVA 0x318E100

int32_t CGOBMFJEDCI__KCBILPIAPHN(CGOBMFJEDCI_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x318E108]
// CGOBMFJEDCI$$DLKKPFHKIPB @ RVA 0x318E108

System_Collections_Generic_IEnumerable_string__o *
CGOBMFJEDCI__DLKKPFHKIPB(CGOBMFJEDCI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566a27 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_17066/*"clear"*/);
    DAT_04566a27 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0328e164 to 0338e20b has its CatchHandler @ 0328e164
                       catch() { ... } // from try @ 0328e164 with catch @ 0328e164
                       catch() { ... } // from try @ 0328e27c with catch @ 0328e164
                       catch() { ... } // from try @ 0328e2a4 with catch @ 0328e164
                       catch() { ... } // from try @ 0328e2cc with catch @ 0328e164
                       catch() { ... } // from try @ 0328e2fc with catch @ 0328e164 */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  item = StringLiteral_17066/*"clear"*/;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string IGMDDJFPIJL()  [RVA 0x318E1F8]
// CGOBMFJEDCI$$IGMDDJFPIJL @ RVA 0x318E1F8

System_String_o * CGOBMFJEDCI__IGMDDJFPIJL(CGOBMFJEDCI_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 0328e20c to 0338e213 has its CatchHandler @ 0328e2ac */
  if ((DAT_04566a28 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3038);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3039);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0328e250 to 0338e27b has its CatchHandler @ 0328e2b0 */
    DAT_04566a28 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3038,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0328e27c to 0338e29f has its CatchHandler @ 0328e164 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3039,(MethodInfo *)0x0);
                    /* try { // try from 0328e2a0 to 0338e2a3 has its CatchHandler @ 0328e2a8 */
                    /* try { // try from 0328e2a4 to 0338e2c7 has its CatchHandler @ 0328e164 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool ECKDICODLME()  [RVA 0x318E2A8]
// CGOBMFJEDCI$$ECKDICODLME @ RVA 0x318E2A8

bool CGOBMFJEDCI__ECKDICODLME(CGOBMFJEDCI_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328e2a0 with catch @ 0328e2a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328e20c with catch @ 0328e2ac
                        */
  return true;
}


// ===== public void .ctor()  [RVA 0x318E2B0]
// CGOBMFJEDCI$$.ctor @ RVA 0x318E2B0

void CGOBMFJEDCI___ctor(CGOBMFJEDCI_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328e250 with catch @ 0328e2b0
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

