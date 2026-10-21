// Nekki.SF2.GUI.Map.DifficultyPanel$$DifficultyEvaluationParse @ RVA 0x30F1C34

/* WARNING: Removing unreachable block (ram,0x031f205c) */

void Nekki_SF2_GUI_Map_DifficultyPanel__DifficultyEvaluationParse
               (System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *NANHIJPKIAP;
  MGNDHCBAPEN_string__float__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *pSVar8;
  long lVar9;
  MGNDHCBAPEN_string__float__array *pMVar10;
  ulong uVar11;
  int *piVar12;
  float JGGJNLLANAE;
  
  if ((DAT_0456642f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Clear__);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_float>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11031);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456642f = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo,method);
  }
  pSVar8 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
  if (pSVar8 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
                    /* try { // try from 031f1d14 to 032f1d1b has its CatchHandler @ 031f1dfc */
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
                    /* try { // try from 031f1d28 to 032f1d3b has its CatchHandler @ 031f1e5c */
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
                    /* try { // try from 031f1d3c to 032f1db7 has its CatchHandler @ 031f1c1c */
    if ((ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (ELOCKFLGKNO,
                                    (ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
                    /* try { // try from 031f1db8 to 032f1dbf has its CatchHandler @ 031f1e04 */
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_031f1de4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
                    /* try { // try from 031f1dc8 to 032f1dcf has its CatchHandler @ 031f1e00 */
                    /* try { // try from 031f1dd0 to 032f1def has its CatchHandler @ 031f1c1c */
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_031f1de4:
        uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 031f1df0 to 032f1df3 has its CatchHandler @ 031f1df8 */
        if ((uVar11 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar3;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_031f1fec;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_031f1fd4;
        }
                    /* try { // try from 031f1df4 to 032f1e1b has its CatchHandler @ 031f1c1c */
        lVar9 = *plVar3;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f1df0 with catch @ 031f1df8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f1d14 with catch @ 031f1dfc
                        */
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f1dc8 with catch @ 031f1e00
                        */
        if (uVar11 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f1db8 with catch @ 031f1e04
                        */
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 031f1e1c with catch @ 031f1e40 */
              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_031f1e44;
            }
            uVar11 = uVar11 - 1;
                    /* try { // try from 031f1e1c to 032f1e1f has its CatchHandler @ 031f1e40 */
            piVar12 = piVar12 + 4;
                    /* try { // try from 031f1e20 to 032f1e47 has its CatchHandler @ 031f1c1c */
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031f1e44:
                    /* try { // try from 031f1e48 to 032f1e5b has its CatchHandler @ 031f1ecc */
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 != (long *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f1d28 with catch @ 031f1e5c
                       try { // try from 031f1e5c to 032f1e73 has its CatchHandler @ 031f1c1c */
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 031f1e74 to 032f1e77 has its CatchHandler @ 031f1ea0 */
                    /* try { // try from 031f1e78 to 032f1eaf has its CatchHandler @ 031f1c1c */
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar5);
          }
        }
        if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 031f1e74 with catch @ 031f1ea0 */
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
                    /* try { // try from 031f1eb0 to 032f1eb7 has its CatchHandler @ 031f1ecc */
                    /* try { // try from 031f1eb8 to 032f1ec3 has its CatchHandler @ 031f1c1c */
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 031f1ec4 to 032f1ecb has its CatchHandler @ 031f1ecc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f1e48 with catch @ 031f1ecc
                       catch(type#2 @ 00000000) { ... } // from try @ 031f1eb0 with catch @ 031f1ecc
                       catch(type#2 @ 00000000) { ... } // from try @ 031f1ec4 with catch @ 031f1ecc
                        */
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
        NANHIJPKIAP = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1,(MethodInfo *)0x0);
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_11031,(MethodInfo *)0x0);
        JGGJNLLANAE = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
        __this = (MGNDHCBAPEN_string__float__o *)
                 thunk_FUN_01bda818(MGNDHCBAPEN<string,_float>_TypeInfo);
        MGNDHCBAPEN<object,_float>___ctor
                  ((MGNDHCBAPEN_T1__T2__o *)__this,(Il2CppObject *)NANHIJPKIAP,JGGJNLLANAE,
                   Method_MGNDHCBAPEN<string,_float>__ctor__);
        lVar9 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Add__;
        if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar10 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pMVar10 == (MGNDHCBAPEN_string__float__array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pMVar10->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pMVar10->m_Items[(int)uVar2] = __this;
          thunk_FUN_01c20e04(pMVar10->m_Items + (int)uVar2,__this);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)__this,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_031f1fd4:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_031f2008;
    }
  }
LAB_031f1fec:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031f2008:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

