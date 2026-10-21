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

