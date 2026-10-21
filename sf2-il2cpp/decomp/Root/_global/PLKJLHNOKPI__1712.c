// TypeDefIndex 1712
// Namespace: 
// public class PLKJLHNOKPI : IEJKLPPLHMO
// Fields:

// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x31D5A64]
// PLKJLHNOKPI$$KCBILPIAPHN @ RVA 0x31D5A64

int32_t PLKJLHNOKPI__KCBILPIAPHN(PLKJLHNOKPI_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x31D5A6C]
// PLKJLHNOKPI$$AJJLBBCJAAL @ RVA 0x31D5A6C

System_String_o *
PLKJLHNOKPI__AJJLBBCJAAL(PLKJLHNOKPI_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  AJOGJBFNELI_o *__this_00;
  long lVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  System_String_array *extraout_x1;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_04566ce0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4523);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4524);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4525);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4526);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566ce0 = 1;
    OPAEPDIIOEB = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,OPAEPDIIOEB);
  }
  __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (__this_00 != (AJOGJBFNELI_o *)0x0) {
                    /* try { // try from 032d5b1c to 033d5b23 has its CatchHandler @ 032d5bcc */
    AJOGJBFNELI__IEFEHKIGBFG(__this_00,(MethodInfo *)0x0);
    lVar1 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
                    /* try { // try from 032d5b38 to 033d5b3f has its CatchHandler @ 032d5bc4 */
                    /* try { // try from 032d5b44 to 033d5b53 has its CatchHandler @ 032d5bb8 */
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
                    /* try { // try from 032d5b54 to 033d5baf has its CatchHandler @ 032d5a4c */
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    plVar8 = (long *)**(undefined8 **)(lVar1 + 0xb8);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4523,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4524,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 032d5bb0 to 033d5bb3 has its CatchHandler @ 032d5bc8 */
    if (plVar8 != (long *)0x0) {
                    /* try { // try from 032d5bb4 to 033d5be7 has its CatchHandler @ 032d5a4c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d5b44 with catch @ 032d5bb8
                        */
      lVar1 = *plVar8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d5b38 with catch @ 032d5bc4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d5bb0 with catch @ 032d5bc8
                        */
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d5b1c with catch @ 032d5bcc
                        */
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
                    /* try { // try from 032d5be8 to 033d5beb has its CatchHandler @ 032d5c18 */
                    /* try { // try from 032d5bec to 033d5c27 has its CatchHandler @ 032d5a4c */
          if (*(HCOEEOMMEFL_c **)(piVar7 + -2) == HCOEEOMMEFL_TypeInfo) {
                    /* catch() { ... } // from try @ 032d5be8 with catch @ 032d5c18 */
            puVar5 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_032d5c20;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar8,HCOEEOMMEFL_TypeInfo,1);
LAB_032d5c20:
                    /* try { // try from 032d5c28 to 033d5c2f has its CatchHandler @ 032d5c44 */
                    /* try { // try from 032d5c30 to 033d5c3b has its CatchHandler @ 032d5a4c */
      (*(code *)*puVar5)(plVar8,pSVar4,0,puVar5[1]);
                    /* try { // try from 032d5c3c to 033d5c43 has its CatchHandler @ 032d5c44 */
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032d5c28 with catch @ 032d5c44
                       catch(type#2 @ 00000000) { ... } // from try @ 032d5c3c with catch @ 032d5c44
                        */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4525,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4526,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string IGMDDJFPIJL()  [RVA 0x31D5C8C]
// PLKJLHNOKPI$$IGMDDJFPIJL @ RVA 0x31D5C8C

System_String_o * PLKJLHNOKPI__IGMDDJFPIJL(PLKJLHNOKPI_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566ce1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4527);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4528);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566ce1 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4527,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4528,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x31D5D3C]
// PLKJLHNOKPI$$DLKKPFHKIPB @ RVA 0x31D5D3C

System_Collections_Generic_IEnumerable_string__o *
PLKJLHNOKPI__DLKKPFHKIPB(PLKJLHNOKPI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566ce2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4529);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4530);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566ce2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4529,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4530,(MethodInfo *)0x0);
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


// ===== public bool ECKDICODLME()  [RVA 0x31D5EAC]
// PLKJLHNOKPI$$ECKDICODLME @ RVA 0x31D5EAC

bool PLKJLHNOKPI__ECKDICODLME(PLKJLHNOKPI_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public void .ctor()  [RVA 0x31D5EB4]
// PLKJLHNOKPI$$.ctor @ RVA 0x31D5EB4

void PLKJLHNOKPI___ctor(PLKJLHNOKPI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

