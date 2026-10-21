// TypeDefIndex 1117
// Namespace: Nekki.SF2.GUI.Map
// public class DifficultyPanel : SFMonoBehaviour<object>
// Fields:
//   private ProgressBar _difficultyBar; // 0x28
//   private LabelAlias _difficultyLabel; // 0x30
//   private static List<MGNDHCBAPEN<string, float>> CAGNGFDHPGF; // 0x0

// ===== public static List<MGNDHCBAPEN<string, float>> get_DifficultyEvaluation()  [RVA 0x30F1898]
// Nekki.SF2.GUI.Map.DifficultyPanel$$get_DifficultyEvaluation @ RVA 0x30F1898

System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *
Nekki_SF2_GUI_Map_DifficultyPanel__get_DifficultyEvaluation(MethodInfo *method)

{
                    /* try { // try from 031f18ac to 032f193b has its CatchHandler @ 031f18ac
                       catch() { ... } // from try @ 031f18ac with catch @ 031f18ac
                       catch() { ... } // from try @ 031f1944 with catch @ 031f18ac
                       catch() { ... } // from try @ 031f19a0 with catch @ 031f18ac
                       catch() { ... } // from try @ 031f19c4 with catch @ 031f18ac
                       catch() { ... } // from try @ 031f19fc with catch @ 031f18ac */
  if ((DAT_0456642c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    DAT_0456642c = 1;
  }
  if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
}


// ===== public void Init(float OEBANKNLEMN)  [RVA 0x30F18F0]
// Nekki.SF2.GUI.Map.DifficultyPanel$$Init @ RVA 0x30F18F0

void Nekki_SF2_GUI_Map_DifficultyPanel__Init
               (Nekki_SF2_GUI_Map_DifficultyPanel_o *__this,float OEBANKNLEMN,MethodInfo *method)

{
  uint uVar1;
  ProgressBar_o *pPVar2;
  Nekki_SF2_GUI_Map_DifficultyPanel_c *method_00;
  MGNDHCBAPEN_string__float__o *item;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_01;
  System_String_array *pSVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  
  if ((DAT_0456642d & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_IndexOf__);
                    /* try { // try from 031f193c to 032f1943 has its CatchHandler @ 031f19a8 */
    DAT_0456642d = 1;
  }
  pPVar2 = (__this->fields)._difficultyBar;
                    /* try { // try from 031f1944 to 032f199b has its CatchHandler @ 031f18ac */
  if (pPVar2 != (ProgressBar_o *)0x0) {
    (*(pPVar2->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,0x42c80000,pPVar2,(pPVar2->klass->vtable)._11_SetValueBorders.method);
    method_00 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo;
    if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (Nekki_SF2_GUI_Map_DifficultyPanel_c *)thunk_FUN_01ba7564();
    }
    item = Nekki_SF2_GUI_Map_DifficultyPanel__GetDifficultyEvaluationPair
                     (OEBANKNLEMN,(MethodInfo *)method_00);
    __this_01 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
    if (__this_01 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
                    /* try { // try from 031f199c to 032f199f has its CatchHandler @ 031f19a4 */
                    /* try { // try from 031f19a0 to 032f19bf has its CatchHandler @ 031f18ac */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f199c with catch @ 031f19a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f193c with catch @ 031f19a8
                        */
      uVar1 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item
                         ,
                         Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_IndexOf__
                        );
      pPVar2 = (__this->fields)._difficultyBar;
      if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* try { // try from 031f19c0 to 032f19c3 has its CatchHandler @ 031f19ec */
        __this_02 = (pPVar2->fields).Stripe;
                    /* try { // try from 031f19c4 to 032f19f3 has its CatchHandler @ 031f18ac */
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = BHEDGAKGKPO_TypeInfo->static_fields->IAJCJOECCFO;
        if (pSVar3 != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 031f19c0 with catch @ 031f19ec */
          if ((uint)pSVar3->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 031f19f4 to 032f19fb has its CatchHandler @ 031f1a10 */
                    /* try { // try from 031f19fc to 032f1a07 has its CatchHandler @ 031f18ac */
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (__this_02,pSVar3->m_Items[(int)uVar1],(MethodInfo *)0x0);
                    /* try { // try from 031f1a08 to 032f1a0f has its CatchHandler @ 031f1a10 */
            pPVar2 = (__this->fields)._difficultyBar;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f19f4 with catch @ 031f1a10
                       catch(type#2 @ 00000000) { ... } // from try @ 031f1a08 with catch @ 031f1a10
                        */
            if (((pPVar2 != (ProgressBar_o *)0x0) &&
                ((*(pPVar2->klass->vtable)._7_set_Value.methodPtr)
                           (0x42c80000,pPVar2,(pPVar2->klass->vtable)._7_set_Value.method),
                item != (MGNDHCBAPEN_string__float__o *)0x0)) &&
               (__this_00 = (__this->fields)._difficultyLabel,
               __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
              Nekki_SF2_GUI_LabelAlias__set_Alias
                        (__this_00,(item->fields).PHPELPFMOII,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MGNDHCBAPEN<string, float> GetDifficultyEvaluationPair(float OEBANKNLEMN)  [RVA 0x30F1A54]
// Nekki.SF2.GUI.Map.DifficultyPanel$$GetDifficultyEvaluationPair @ RVA 0x30F1A54

MGNDHCBAPEN_string__float__o *
Nekki_SF2_GUI_Map_DifficultyPanel__GetDifficultyEvaluationPair(float OEBANKNLEMN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *pSVar2;
  MGNDHCBAPEN_string__float__o *pMVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456642e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__);
    DAT_0456642e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
  if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
    pMVar3 = (MGNDHCBAPEN_string__float__o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,0,
                        Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__
                       );
    pSVar2 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
    if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__)
      ;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                    );
          return pMVar3;
        }
        if ((MGNDHCBAPEN_string__float__o *)local_48.fields._current ==
            (MGNDHCBAPEN_string__float__o *)0x0) break;
        fVar4 = ((MGNDHCBAPEN_string__float__Fields *)((long)local_48.fields._current + 0x10))->
                DOKHHBGJICA;
        if (fVar4 < OEBANKNLEMN) {
          if (pMVar3 == (MGNDHCBAPEN_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((pMVar3->fields).DOKHHBGJICA < fVar4) {
            pMVar3 = (MGNDHCBAPEN_string__float__o *)local_48.fields._current;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DifficultyEvaluationParse(XmlNode ELOCKFLGKNO)  [RVA 0x30F1C34]
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
    FUN_01bab630(&StringLiteral_11031/*"RatingRatioTreshold"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
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
                           (pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        NANHIJPKIAP = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_11031/*"RatingRatioTreshold"*/,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x30F2160]
// Nekki.SF2.GUI.Map.DifficultyPanel$$.ctor @ RVA 0x30F2160

void Nekki_SF2_GUI_Map_DifficultyPanel___ctor
               (Nekki_SF2_GUI_Map_DifficultyPanel_o *__this,MethodInfo *method)

{
  if ((DAT_04566430 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
    DAT_04566430 = 1;
  }
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
  return;
}


// ===== private static void .cctor()  [RVA 0x30F21A8]
// Nekki.SF2.GUI.Map.DifficultyPanel$$.cctor @ RVA 0x30F21A8

void Nekki_SF2_GUI_Map_DifficultyPanel___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this;
  
  if ((DAT_04566431 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
    DAT_04566431 = 1;
  }
  __this = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
  Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields,__this);
  return;
}

