// TypeDefIndex 672
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidDailyTaskCell : MonoBehaviour
// Fields:
//   private const string CBIKBLLHCIN = "130";
//   private GameObject _taskLayout; // 0x20
//   private ProgressBar _taskProgressBar; // 0x28
//   private LabelAlias _taskTitleLbl; // 0x30
//   private LabelAlias _taskProgressLbl; // 0x38
//   private LabelAlias _taskRewardLbl; // 0x40
//   private LabelAlias _taskRewardRatingLbl; // 0x48
//   private LabelAlias _bestResultTitleLabel; // 0x50
//   private LabelAlias _rewardInfo; // 0x58
//   private ResolutionButton _taskRefreshBtn; // 0x60
//   private LabelAlias _TaskRefreshADViewsLabel; // 0x68
//   private GameObject _noTaskLayout; // 0x70
//   private LabelAlias _taskRemainingTimeLbl; // 0x78
//   private LabelAlias _beforeNextTaskLbl; // 0x80
//   private LabelAlias _getTaskNowLbl; // 0x88
//   private LabelButton _btnSkipCooldown; // 0x90
//   private GameObject _rewardLayout; // 0x98
//   private int LIIAOOJGEML; // 0xA0
//   private List<GameObject> KPKPCPFOGAP; // 0xA8
//   private List<string> LHCMEFOICKM; // 0xB0
//   private Sequence BHMLAAAEHKA; // 0xB8
//   private int OLECEBGAGMI; // 0xC0
//   private int DIONJIKONHC; // 0xC4
//   private BDMABHJEEGD NCJONEIOCML; // 0xC8
//   private RaidConfig.EBEGCDCOHHJ MGIFEGEAHOB; // 0xD0
//   private long GIFMJFJDFFG; // 0xD8
//   private bool NAMPHBKLLDM; // 0xE0

// ===== private void HPADIJDOKDN()  [RVA 0x3026DB8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$HPADIJDOKDN @ RVA 0x3026DB8

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__HPADIJDOKDN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  MethodInfo *method_00;
  
  pUVar1 = (__this->fields)._taskLayout;
  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 03126db0 with catch @ 03126dd4 */
    method_00 = (MethodInfo *)0x0;
                    /* try { // try from 03126ddc to 03226de3 has its CatchHandler @ 03126df8 */
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
                    /* try { // try from 03126de4 to 03226def has its CatchHandler @ 031269b8 */
    Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__SetRefreshButtonVisible(__this,false,method_00);
    pUVar1 = (__this->fields)._noTaskLayout;
                    /* try { // try from 03126df0 to 03226df7 has its CatchHandler @ 03126df8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03126ddc with catch @ 03126df8
                       catch(type#2 @ 00000000) { ... } // from try @ 03126df0 with catch @ 03126df8
                        */
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OPLLGEBAFIO()  [RVA 0x3026E68]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$OPLLGEBAFIO @ RVA 0x3026E68

/* WARNING: Removing unreachable block (ram,0x03127a7c) */
/* WARNING: Removing unreachable block (ram,0x031270d0) */
/* WARNING: Removing unreachable block (ram,0x03127b4c) */
/* WARNING: Removing unreachable block (ram,0x03127b30) */

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__OPLLGEBAFIO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  System_Collections_Generic_List_GameObject__o *pSVar9;
  VirtualInvokeData *pVVar10;
  long lVar11;
  RaidConfig_o *pJVar12;
  RaidConfig_ODJJOAOCFKO_o *pJVar13;
  System_Byte_array *pSVar14;
  System_Byte_array *pSVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *pNVar18;
  System_Text_StringBuilder_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  undefined8 uVar21;
  UnityEngine_GameObject_o *pUVar22;
  UnityEngine_CanvasGroup_o *pUVar23;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  BDMABHJEEGD_o *pBVar24;
  System_Collections_Generic_List_string__o *pSVar25;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__c *pGVar26;
  System_String_array *pSVar27;
  UnityEngine_GameObject_array *pUVar28;
  ulong uVar29;
  int32_t *piVar30;
  BECIPDJBAOG_o *__this_03;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar31;
  Nekki_SF2_GUI_LabelAlias_o *original;
  uint uVar32;
  int iVar33;
  undefined1 auVar34 [16];
  UnityEngine_Vector3_o UVar35;
  System_Collections_Generic_List_Enumerator_T__o local_d8;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  undefined8 local_78;
  
  auVar34._8_8_ = method;
  auVar34._0_8_ = __this;
  if ((DAT_04565c97 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1656);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1657);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1658);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1659);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1660);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1661);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1662);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1663);
                    /* try { // try from 03126efc to 03226f03 has its CatchHandler @ 03126fc8 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GameObject>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GameObject>_MoveNext__);
                    /* try { // try from 03126f40 to 03226f6f has its CatchHandler @ 03126fcc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GameObject>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__);
                    /* try { // try from 03126f70 to 03226fb7 has its CatchHandler @ 03126e40 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_Clear__);
                    /* try { // try from 03126fb8 to 03226fbf has its CatchHandler @ 03126fc4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
                    /* try { // try from 03126fc0 to 03226fe7 has its CatchHandler @ 03126e40 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126fb8 with catch @ 03126fc4
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126efc with catch @ 03126fc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126f40 with catch @ 03126fcc
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Count__);
                    /* try { // try from 03126fe8 to 03226feb has its CatchHandler @ 0312700c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
                    /* try { // try from 03126fec to 03227013 has its CatchHandler @ 03126e40 */
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LabelAlias>__);
                    /* catch() { ... } // from try @ 03126fe8 with catch @ 0312700c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03127014 to 0322701b has its CatchHandler @ 03127030 */
    auVar34 = FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 0312701c to 03227027 has its CatchHandler @ 03126e40 */
    DAT_04565c97 = 1;
  }
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
                    /* try { // try from 03127028 to 0322702f has its CatchHandler @ 03127030 */
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_78 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03127014 with catch @ 03127030
                       catch(type#2 @ 00000000) { ... } // from try @ 03127028 with catch @ 03127030
                        */
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  pBVar24 = (__this->fields).NCJONEIOCML;
  if (pBVar24 == (BDMABHJEEGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar34._0_8_,auVar34._8_8_);
  }
  if ((pBVar24->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    pSVar9 = (__this->fields).KPKPCPFOGAP;
    if (pSVar9 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,auVar34._8_8_);
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_d8,(System_Collections_Generic_List_object__o *)pSVar9,
               Method_System_Collections_Generic_List<GameObject>_GetEnumerator__);
    local_a0.fields._index = local_d8.fields._index;
    local_a0.fields._version = local_d8.fields._version;
    local_a0.fields._list = local_d8.fields._list;
    local_a0.fields._current = local_d8.fields._current;
    while (bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<GameObject>_MoveNext__
                             ), bVar7) {
      Util__JODGPLBHHIA((UnityEngine_GameObject_o *)local_a0.fields._current,false,(MethodInfo *)0x0
                       );
      local_78 = CONCAT44(1,(int32_t)local_78);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<GameObject>_Dispose__);
    pSVar9 = (__this->fields).KPKPCPFOGAP;
    if (pSVar9 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pSVar9->fields)._size;
    (pSVar9->fields)._size = 0;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (0 < iVar1) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar25 = (__this->fields).LHCMEFOICKM;
    if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pSVar25->fields)._size;
    (pSVar25->fields)._size = 0;
    (pSVar25->fields)._version = (pSVar25->fields)._version + 1;
    if (0 < iVar1) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar25->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pBVar24 = (__this->fields).NCJONEIOCML;
    if (pBVar24 == (BDMABHJEEGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_03 = (pBVar24->fields).MJIIHOLHNCK;
    local_78 = CONCAT44(2,(int32_t)local_78);
    if (__this_03 == (BECIPDJBAOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar7 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_IList_T__o *)(__this_03->fields).LEJBLHJFJHP,
                       Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
    if (!bVar7) {
      pGVar31 = (__this_03->fields).LEJBLHJFJHP;
      if (pGVar31 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar32 = 0;
      do {
        pGVar26 = pGVar31->klass;
        uVar2._0_1_ = (pGVar26->_2).rank;
        uVar2._1_1_ = (pGVar26->_2).minimumAlignment;
        uVar29 = (ulong)uVar2;
        if (uVar29 != 0) {
          piVar30 = &((pGVar26->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar30 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo) {
              pVVar10 = &(pGVar26->vtable)._0_Equals + *piVar30;
              goto LAB_031271e4;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pGVar31,System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo,
                               0);
LAB_031271e4:
        iVar8 = (*pVVar10->methodPtr)(pGVar31,pVVar10->method);
        if (iVar8 <= (int)uVar32) break;
        pGVar26 = pGVar31->klass;
        uVar3._0_1_ = (pGVar26->_2).rank;
        uVar3._1_1_ = (pGVar26->_2).minimumAlignment;
        uVar29 = (ulong)uVar3;
        if (uVar29 != 0) {
          piVar30 = &((pGVar26->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar30 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo) {
              pVVar10 = &(pGVar26->vtable)._0_Equals + *piVar30;
              goto LAB_0312724c;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pGVar31,System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo,0);
LAB_0312724c:
        lVar11 = (*pVVar10->methodPtr)(pGVar31,(ulong)uVar32,pVVar10->method);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar12 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (pJVar12 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pJVar13 = RaidConfig__DOKLIOAMCCO
                            (pJVar12,*(System_String_o **)(lVar11 + 0x18),(MethodInfo *)0x0);
        pSVar14 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar14,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1656,
                   (MethodInfo *)0x0);
        pSVar15 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar15,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1657,
                   (MethodInfo *)0x0);
        pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar14,pSVar15,(MethodInfo *)0x0);
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(lVar11 + 0x20));
        pSVar17 = System_Int32__ToString((int32_t)&local_78,(MethodInfo *)0x0);
        pNVar18 = (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)
                  System_String__Concat(pSVar16,pSVar17,(MethodInfo *)0x0);
        if (pJVar13 == (RaidConfig_ODJJOAOCFKO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar25 = (__this->fields).LHCMEFOICKM;
        pSVar16 = Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__ENFEBLKOAGP
                            (pNVar18,(pJVar13->fields).APBICPEOMOM,(System_String_o *)pNVar18,in_x3)
        ;
        lVar11 = Method_System_Collections_Generic_List<string>_Add__;
        if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar27 = (pSVar25->fields)._items;
        (pSVar25->fields)._version = (pSVar25->fields)._version + 1;
        if (pSVar27 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar6 = (pSVar25->fields)._size;
        if (uVar6 < (uint)pSVar27->max_length) {
          (pSVar25->fields)._size = uVar6 + 1;
          pSVar27->m_Items[(int)uVar6] = pSVar16;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar25,(Il2CppObject *)pSVar16,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uVar32 = uVar32 + 1;
      } while( true );
    }
    local_78 = CONCAT44(3,(int32_t)local_78);
    bVar7 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_IList_T__o *)(__this_03->fields).AKFPFIHIHOC,
                       Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
    if (!bVar7) {
      pGVar31 = (__this_03->fields).AKFPFIHIHOC;
      if (pGVar31 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar32 = 0;
      do {
        pGVar26 = pGVar31->klass;
        uVar4._0_1_ = (pGVar26->_2).rank;
        uVar4._1_1_ = (pGVar26->_2).minimumAlignment;
        uVar29 = (ulong)uVar4;
        if (uVar29 != 0) {
          piVar30 = &((pGVar26->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar30 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo) {
              pVVar10 = &(pGVar26->vtable)._0_Equals + *piVar30;
              goto LAB_0312742c;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pGVar31,System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo,
                               0);
LAB_0312742c:
        iVar8 = (*pVVar10->methodPtr)(pGVar31,pVVar10->method);
        if (iVar8 <= (int)uVar32) break;
        pGVar26 = pGVar31->klass;
        uVar5._0_1_ = (pGVar26->_2).rank;
        uVar5._1_1_ = (pGVar26->_2).minimumAlignment;
        uVar29 = (ulong)uVar5;
        if (uVar29 != 0) {
          piVar30 = &((pGVar26->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar30 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo) {
              pVVar10 = &(pGVar26->vtable)._0_Equals + *piVar30;
              goto LAB_03127494;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pGVar31,System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo,0);
LAB_03127494:
        lVar11 = (*pVVar10->methodPtr)(pGVar31,(ulong)uVar32,pVVar10->method);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar12 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (pJVar12 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pJVar13 = RaidConfig__DOKLIOAMCCO
                            (pJVar12,*(System_String_o **)(lVar11 + 0x18),(MethodInfo *)0x0);
        pSVar14 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar14,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1658,
                   (MethodInfo *)0x0);
        pSVar15 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar15,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1659,
                   (MethodInfo *)0x0);
        pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar14,pSVar15,(MethodInfo *)0x0);
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(lVar11 + 0x20));
        pSVar17 = System_Int32__ToString((int32_t)&local_78,(MethodInfo *)0x0);
        pNVar18 = (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)
                  System_String__Concat(pSVar16,pSVar17,(MethodInfo *)0x0);
        if (pJVar13 == (RaidConfig_ODJJOAOCFKO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar25 = (__this->fields).LHCMEFOICKM;
        pSVar16 = Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__ENFEBLKOAGP
                            (pNVar18,(pJVar13->fields).APBICPEOMOM,(System_String_o *)pNVar18,in_x3)
        ;
        lVar11 = Method_System_Collections_Generic_List<string>_Add__;
        if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar27 = (pSVar25->fields)._items;
        (pSVar25->fields)._version = (pSVar25->fields)._version + 1;
        if (pSVar27 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar6 = (pSVar25->fields)._size;
        if (uVar6 < (uint)pSVar27->max_length) {
          (pSVar25->fields)._size = uVar6 + 1;
          pSVar27->m_Items[(int)uVar6] = pSVar16;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar25,(Il2CppObject *)pSVar16,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uVar32 = uVar32 + 1;
      } while( true );
    }
    local_78._4_4_ = 4;
    bVar7 = BECIPDJBAOG__BODMFFONFKC(__this_03,(MethodInfo *)0x0);
    if (bVar7) {
      pSVar14 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar14,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1660,
                 (MethodInfo *)0x0);
      pSVar15 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar15,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1661,
                 (MethodInfo *)0x0);
      pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar14,pSVar15,(MethodInfo *)0x0);
      local_78._0_4_ = (__this_03->fields).EMOLIBOCKJK;
      pSVar17 = System_Int32__ToString((int32_t)&local_78,(MethodInfo *)0x0);
      pSVar16 = System_String__Concat(pSVar16,pSVar17,(MethodInfo *)0x0);
      pSVar25 = (__this->fields).LHCMEFOICKM;
      pSVar14 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar14,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1662,
                 (MethodInfo *)0x0);
      pSVar15 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar15,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1663,
                 (MethodInfo *)0x0);
      pNVar18 = (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)
                OMHODMCHILE__NPKGDBHJKCK(pSVar14,pSVar15,(MethodInfo *)0x0);
      pSVar16 = Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__ENFEBLKOAGP
                          (pNVar18,(System_String_o *)pNVar18,pSVar16,in_x3);
      lVar11 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar27 = (pSVar25->fields)._items;
      (pSVar25->fields)._version = (pSVar25->fields)._version + 1;
      if (pSVar27 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar32 = (pSVar25->fields)._size;
      if (uVar32 < (uint)pSVar27->max_length) {
        (pSVar25->fields)._size = uVar32 + 1;
        pSVar27->m_Items[(int)uVar32] = pSVar16;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar25,(Il2CppObject *)pSVar16,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
    local_78 = CONCAT44(5,(int32_t)local_78);
    __this_00 = (System_Text_StringBuilder_o *)
                thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    pSVar25 = (__this->fields).LHCMEFOICKM;
    if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_d8,(System_Collections_Generic_List_object__o *)pSVar25,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    iVar8 = 0;
    iVar33 = 1;
    local_c0.fields._index = local_d8.fields._index;
    local_c0.fields._version = local_d8.fields._version;
    local_c0.fields._list = local_d8.fields._list;
    local_c0.fields._current = local_d8.fields._current;
    while (bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_c0,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          bVar7) {
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Text_StringBuilder__Append
                (__this_00,(System_String_o *)local_c0.fields._current,(MethodInfo *)0x0);
      iVar8 = iVar8 + 1;
      local_78 = CONCAT44(5,(int32_t)local_78);
      if (iVar8 == 2) {
LAB_0312780c:
        original = (__this->fields)._rewardInfo;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = (UnityEngine_Component_o *)
                    UnityEngine_Object__Instantiate<object>
                              ((Il2CppObject *)original,
                               Method_UnityEngine_Object_Instantiate<LabelAlias>__);
        __this_02 = (UnityEngine_GameObject_o *)
                    UnityEngine_Object__Instantiate<object>
                              ((Il2CppObject *)(__this->fields)._rewardLayout,
                               Method_UnityEngine_Object_Instantiate<GameObject>__);
        local_78 = CONCAT44(6,(int32_t)local_78);
        if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar19 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar20 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        if (pUVar19 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Transform__SetParent(pUVar19,pUVar20,(MethodInfo *)0x0);
        uVar21 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        (*__this_01->klass[4]._1.gc_desc)(__this_01,uVar21,__this_01->klass[4]._1.name);
        pUVar19 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        pUVar22 = (__this->fields)._taskLayout;
        if (pUVar22 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar20 = UnityEngine_GameObject__get_transform(pUVar22,(MethodInfo *)0x0);
        if (pUVar19 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Transform__SetParent(pUVar19,pUVar20,(MethodInfo *)0x0);
        local_78 = CONCAT44(7,(int32_t)local_78);
        pUVar22 = (__this->fields)._rewardLayout;
        if (pUVar22 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar19 = UnityEngine_GameObject__get_transform(pUVar22,(MethodInfo *)0x0);
        if (pUVar19 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar35 = UnityEngine_Transform__get_localPosition(pUVar19,(MethodInfo *)0x0);
        pUVar19 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPosition
                  (pUVar19,UVar35.fields.x,UVar35.fields.y,UVar35.fields.z,(MethodInfo *)0x0);
        pUVar19 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(pUVar19,1.0,(MethodInfo *)0x0);
        local_78 = CONCAT44(8,(int32_t)local_78);
        System_Text_StringBuilder__Clear(__this_00,(MethodInfo *)0x0);
        pUVar22 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
        if (pUVar22 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_GameObject__SetActive(pUVar22,true,(MethodInfo *)0x0);
        local_78 = CONCAT44(9,(int32_t)local_78);
        pSVar9 = (__this->fields).KPKPCPFOGAP;
        if (pSVar9 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((pSVar9->fields)._size < 1) {
          pUVar23 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_02,Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__);
          if (pUVar23 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_CanvasGroup__set_alpha(pUVar23,1.0,(MethodInfo *)0x0);
        }
        else {
          pUVar23 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_02,Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__);
          if (pUVar23 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_CanvasGroup__set_alpha(pUVar23,0.0,(MethodInfo *)0x0);
        }
        lVar11 = Method_System_Collections_Generic_List<GameObject>_Add__;
        pSVar9 = (__this->fields).KPKPCPFOGAP;
        if (pSVar9 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar28 = (pSVar9->fields)._items;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (pUVar28 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar32 = (pSVar9->fields)._size;
        if (uVar32 < (uint)pUVar28->max_length) {
          (pSVar9->fields)._size = uVar32 + 1;
          pUVar28->m_Items[(int)uVar32] = __this_02;
          thunk_FUN_01c20e04(pUVar28->m_Items + (int)uVar32,__this_02);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)__this_02,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar8 = 0;
        local_78 = CONCAT44(10,(int32_t)local_78);
      }
      else {
        pSVar25 = (__this->fields).LHCMEFOICKM;
        if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (iVar33 == (pSVar25->fields)._size) goto LAB_0312780c;
      }
      iVar33 = iVar33 + 1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_c0,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    pSVar9 = (__this->fields).KPKPCPFOGAP;
    if (pSVar9 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (1 < (pSVar9->fields)._size) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__MIHMIJDPJCL(__this,method_00);
    }
  }
  return;
}


// ===== private void MFBDEFGCHPF(float CJNHFNHJHPE)  [RVA 0x3028260]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$MFBDEFGCHPF @ RVA 0x3028260

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__MFBDEFGCHPF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  
  if ((DAT_04565c98 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Item__);
    DAT_04565c98 = 1;
  }
  __this_00 = (__this->fields).KPKPCPFOGAP;
  if (((__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
      (__this_01 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              (__this->fields).DIONJIKONHC,
                              Method_System_Collections_Generic_List<GameObject>_get_Item__),
      __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_02 = (UnityEngine_CanvasGroup_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_01,Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__),
     __this_02 != (UnityEngine_CanvasGroup_o *)0x0)) {
    UnityEngine_CanvasGroup__set_alpha(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DJPPAELDLFC(Unit HOKBHLPPCAH)  [RVA 0x30282F0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$DJPPAELDLFC @ RVA 0x30282F0

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__DJPPAELDLFC(long __this)

{
  System_String_StaticFields *pSVar1;
  
  if ((DAT_04565ca5 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04565ca5 = 1;
  }
  if (*(long *)(__this + 0xd0) == 0) {
    pSVar1 = string_TypeInfo->static_fields;
  }
  else {
    pSVar1 = (System_String_StaticFields *)(*(long *)(__this + 0xd0) + 0x20);
  }
  if (*(Nekki_SF2_GUI_LabelAlias_o **)(__this + 0x30) != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias
              (*(Nekki_SF2_GUI_LabelAlias_o **)(__this + 0x30),pSVar1->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool AIBHLHDCMIO()  [RVA 0x3028360]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$AIBHLHDCMIO @ RVA 0x3028360

bool Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__AIBHLHDCMIO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *pGVar2;
  bool bVar3;
  
  if ((DAT_04565c99 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_8);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1666);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565c99 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 == (NFFDIPBFJHP_o *)0x0) {
LAB_031284cc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pNVar1->fields).NEACDFLBNFO != (GLPEFEEGCPM_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
    if ((pNVar1 == (NFFDIPBFJHP_o *)0x0) ||
       (pGVar2 = (pNVar1->fields).NEACDFLBNFO, pGVar2 == (GLPEFEEGCPM_o *)0x0)) goto LAB_031284cc;
    if ((pGVar2->fields).PBBGNHKFEPG != (FADHMEJJCPO_o *)0x0) {
      bVar3 = false;
      if ((__this->fields).NCJONEIOCML != (BDMABHJEEGD_o *)0x0) {
        return false;
      }
      goto LAB_0312842c;
    }
  }
  bVar3 = true;
LAB_0312842c:
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1666,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_8,(MethodInfo *)0x0);
  message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  return bVar3;
}


// ===== private void JKONMJEBNPH()  [RVA 0x30284D0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$JKONMJEBNPH @ RVA 0x30284D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__JKONMJEBNPH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c9a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_BHLHBBKAFHH__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565c9a = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._beforeNextTaskLbl;
  (__this->fields).GIFMJFJDFFG = 0;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031285a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,StringLiteral_1/*""*/,(pNVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CMFFMBKDFMP(float CJNHFNHJHPE)  [RVA 0x30285AC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$CMFFMBKDFMP @ RVA 0x30285AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__CMFFMBKDFMP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  
  if ((DAT_04565c9b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Item__);
    DAT_04565c9b = 1;
  }
  __this_00 = (__this->fields).KPKPCPFOGAP;
  if (((__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
      (__this_01 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              (__this->fields).OLECEBGAGMI,
                              Method_System_Collections_Generic_List<GameObject>_get_Item__),
      __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_02 = (UnityEngine_CanvasGroup_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_01,Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__),
     __this_02 != (UnityEngine_CanvasGroup_o *)0x0)) {
    UnityEngine_CanvasGroup__set_alpha(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x302863C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$.ctor @ RVA 0x302863C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_GameObject__o **ppSVar1;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03128664 with catch @ 0312864c
                       catch() { ... } // from try @ 03128694 with catch @ 0312864c
                       catch() { ... } // from try @ 031286d0 with catch @ 0312864c */
                    /* try { // try from 0312865c to 03228663 has its CatchHandler @ 03128678 */
                    /* try { // try from 03128664 to 0322868f has its CatchHandler @ 0312864c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312865c with catch @ 03128678
                        */
  if ((DAT_04565c9c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
                    /* try { // try from 03128690 to 03228693 has its CatchHandler @ 031286c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 03128694 to 032286c3 has its CatchHandler @ 0312864c */
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565c9c = 1;
    method = extraout_x1;
  }
  (__this->fields).LIIAOOJGEML = -1;
                    /* catch() { ... } // from try @ 03128690 with catch @ 031286c0 */
  __this_00 = (System_Collections_Generic_List_GameObject__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo,method);
                    /* try { // try from 031286c4 to 032286cf has its CatchHandler @ 031286e4 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GameObject>__ctor__);
  ppSVar1 = &(__this->fields).KPKPCPFOGAP;
                    /* try { // try from 031286d0 to 032286db has its CatchHandler @ 0312864c */
  *ppSVar1 = __this_00;
                    /* try { // try from 031286dc to 032286e3 has its CatchHandler @ 031286e4 */
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031286c4 with catch @ 031286e4
                       catch(type#2 @ 00000000) { ... } // from try @ 031286dc with catch @ 031286e4
                        */
  __this_01 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 031286e8 to 0322875b has its CatchHandler @ 031286e8
                       catch() { ... } // from try @ 031286e8 with catch @ 031286e8
                       catch() { ... } // from try @ 03128780 with catch @ 031286e8
                       catch() { ... } // from try @ 03128804 with catch @ 031286e8
                       catch() { ... } // from try @ 0312885c with catch @ 031286e8 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields).LHCMEFOICKM;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).DIONJIKONHC = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private float PLHLIKHCKBH()  [RVA 0x3028728]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$PLHLIKHCKBH @ RVA 0x3028728

float Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__PLHLIKHCKBH
                (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  float fVar1;
  
  if ((DAT_04565c9d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Item__);
                    /* try { // try from 0312875c to 0322877f has its CatchHandler @ 031287d4 */
    DAT_04565c9d = 1;
  }
  __this_00 = (__this->fields).KPKPCPFOGAP;
                    /* try { // try from 03128780 to 032287eb has its CatchHandler @ 031286e8 */
  if (((__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
      (__this_01 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              (__this->fields).DIONJIKONHC,
                              Method_System_Collections_Generic_List<GameObject>_get_Item__),
      __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_02 = (UnityEngine_CanvasGroup_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_01,Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__),
     __this_02 != (UnityEngine_CanvasGroup_o *)0x0)) {
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_02,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GLCNPHCKIJP(int JEGMMDPFNIL, int KMOHFJKJBMK)  [RVA 0x30287A8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$GLCNPHCKIJP @ RVA 0x30287A8

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__GLCNPHCKIJP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,int32_t JEGMMDPFNIL,
               int32_t KMOHFJKJBMK,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  int32_t local_38;
  int32_t local_34;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312875c with catch @ 031287d4
                        */
  if ((DAT_04565c9e & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 031287ec to 03228803 has its CatchHandler @ 03128854 */
    FUN_01bab630(&StringLiteral_15827/*"^Video_ViewsLabel^ {0}/{1}"*/);
    DAT_04565c9e = 1;
  }
                    /* try { // try from 03128804 to 03228843 has its CatchHandler @ 031286e8 */
  pNVar1 = (__this->fields)._TaskRefreshADViewsLabel;
  local_34 = JEGMMDPFNIL;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  local_38 = KMOHFJKJBMK;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
  CJNHFNHJHPE = System_String__Format(StringLiteral_15827/*"^Video_ViewsLabel^ {0}/{1}"*/,arg0,arg1,(MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 03128844 to 03228853 has its CatchHandler @ 03128854 */
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031287ec with catch @ 03128854
                       catch() { ... } // from try @ 03128844 with catch @ 03128854 */
    pNVar1 = (__this->fields)._TaskRefreshADViewsLabel;
                    /* try { // try from 03128858 to 0322885b has its CatchHandler @ 03128864 */
                    /* try { // try from 0312885c to 03228867 has its CatchHandler @ 031286e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03128858 with catch @ 03128864
                        */
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,1 < KMOHFJKJBMK,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string ENFEBLKOAGP(string MCPBDJAGNNM, string HNEIBAFLEMK)  [RVA 0x3027F10]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$ENFEBLKOAGP @ RVA 0x3027F10

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__ENFEBLKOAGP
          (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,System_String_o *MCPBDJAGNNM,
          System_String_o *HNEIBAFLEMK,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565c9f & 1) == 0) {
    FUN_01bab630(&StringLiteral_2446/*"<quad name={0} max=130 min=70 />{1}"*/);
    DAT_04565c9f = 1;
  }
  pSVar1 = OFFIONDOEPM__AMJCJJALAJH(MCPBDJAGNNM,(MethodInfo *)0x0);
  pSVar1 = System_String__Format
                     (StringLiteral_2446/*"<quad name={0} max=130 min=70 />{1}"*/,(Il2CppObject *)pSVar1,(Il2CppObject *)HNEIBAFLEMK,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== private void OnDestroy()  [RVA 0x3028890]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$OnDestroy @ RVA 0x3028890

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  DailyRefreshRewardHelper__DGLJCGNHLIG((MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__JKONMJEBNPH(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__CCPABLFBFFA(__this,method_01);
  return;
}


// ===== private void MIHMIJDPJCL()  [RVA 0x3027F7C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$MIHMIJDPJCL @ RVA 0x3027F7C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__MIHMIJDPJCL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_DOGetter_float__o *pDVar2;
  DG_Tweening_Core_DOSetter_float__o *pDVar3;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar4;
  DG_Tweening_Tween_o *pDVar5;
  Il2CppObject *t;
  DG_Tweening_TweenCallback_o *action;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  DG_Tweening_Sequence_o **ppDVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04565ca0 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_CMFFMBKDFMP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_MFBDEFGCHPF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_NFMPCDHBCLP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_ODGHIBFMFAG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_PLHLIKHCKBH__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnStepComplete<TweenerCore<float,_float,_FloatOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                );
    auVar8 = FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_04565ca0 = 1;
  }
  pSVar6 = (__this->fields).KPKPCPFOGAP;
  if (pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    if ((pSVar6->fields)._size == 1) {
      return;
    }
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    ppDVar7 = &(__this->fields).BHMLAAAEHKA;
    *ppDVar7 = pDVar1;
    thunk_FUN_01c20e04(ppDVar7,pDVar1);
    DG_Tweening_TweenSettingsExtensions__AppendInterval(*ppDVar7,0.5,(MethodInfo *)0x0);
    pDVar1 = *ppDVar7;
    pDVar2 = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    pDVar3 = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    pDVar4 = DG_Tweening_DOTween__To(pDVar2,pDVar3,0.0,1.0,(MethodInfo *)0x0);
    pDVar5 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase<object>
                       ((Il2CppObject *)pDVar4,9,
                        Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                       );
    DG_Tweening_TweenSettingsExtensions__Append(pDVar1,pDVar5,(MethodInfo *)0x0);
    pDVar1 = *ppDVar7;
    pDVar2 = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    pDVar3 = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    pDVar4 = DG_Tweening_DOTween__To(pDVar2,pDVar3,1.0,1.0,(MethodInfo *)0x0);
    t = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                  ((Il2CppObject *)pDVar4,8,
                   Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                  );
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
    DG_Tweening_TweenCallback___ctor();
    pDVar5 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__OnStepComplete<object>
                       (t,action,
                        Method_DG_Tweening_TweenSettingsExtensions_OnStepComplete<TweenerCore<float,_float,_FloatOptions>>__
                       );
    DG_Tweening_TweenSettingsExtensions__Append(pDVar1,pDVar5,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__SetLoops<object>
              ((Il2CppObject *)*ppDVar7,-1,0,
               Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DG_Tweening_TweenExtensions__Restart
              ((DG_Tweening_Tween_o *)*ppDVar7,true,-1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
}


// ===== private void ODGHIBFMFAG()  [RVA 0x3028900]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$ODGHIBFMFAG @ RVA 0x3028900

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__ODGHIBFMFAG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04565ca1 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Count__);
    DAT_04565ca1 = 1;
  }
  iVar2 = (__this->fields).DIONJIKONHC;
  pSVar3 = (__this->fields).KPKPCPFOGAP;
  iVar1 = iVar2 + 1;
  (__this->fields).OLECEBGAGMI = iVar2;
  (__this->fields).DIONJIKONHC = iVar1;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    if ((pSVar3->fields)._size == iVar1) {
      (__this->fields).DIONJIKONHC = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}


// ===== private void HBNFNAJANGK(object IMMNELPBGIF)  [RVA 0x3028960]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$HBNFNAJANGK @ RVA 0x3028960

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__HBNFNAJANGK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t JEGMMDPFNIL;
  int32_t KMOHFJKJBMK;
  Il2CppObject *__this_00;
  int *piVar1;
  AdvertisingViewsManager_o *pPVar2;
  System_Action_o *PJDPEGNLFHH;
  System_Action_o *IECMGNKMACB;
  System_Action_int__int__o *HLBLIDOPBJJ;
  MethodInfo *method_00;
  
  if ((DAT_04565ca2 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_ABGFCIMEKCJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_EIOLMLOELDL__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_TypeInfo);
    FUN_01bab630(&System_Action<int,_int>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_GLCNPHCKIJP__);
    DAT_04565ca2 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_TypeInfo)
  ;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    if (IMMNELPBGIF != (Il2CppObject *)0x0) {
      if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(IMMNELPBGIF);
      }
      piVar1 = (int *)thunk_FUN_01bda96c();
      if (*piVar1 != 1) {
        return;
      }
      (__this->fields).NAMPHBKLLDM = false;
      pPVar2 = AdvertisingViewsManager__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pPVar2 != (AdvertisingViewsManager_o *)0x0) {
        JEGMMDPFNIL = AdvertisingViewsManager__OMLNCFNPAMJ(pPVar2,0xd,0,(MethodInfo *)0x0);
        pPVar2 = AdvertisingViewsManager__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pPVar2 != (AdvertisingViewsManager_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          KMOHFJKJBMK = AdvertisingViewsManager__LAPHEMPOHMP(pPVar2,0xd,1,(MethodInfo *)0x0);
          *(int32_t *)&__this_00[1].monitor = KMOHFJKJBMK;
          Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__GLCNPHCKIJP
                    (__this,JEGMMDPFNIL,KMOHFJKJBMK,method_00);
          PJDPEGNLFHH = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          IECMGNKMACB = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          HLBLIDOPBJJ = (System_Action_int__int__o *)
                        thunk_FUN_01bda818(System_Action<int,_int>_TypeInfo);
          System_Action<int,_int>___ctor();
          DailyRefreshRewardHelper__FAAJFKFKBOL(PJDPEGNLFHH,IECMGNKMACB,HLBLIDOPBJJ,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AADJLKMEKBF()  [RVA 0x3028B54]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$AADJLKMEKBF @ RVA 0x3028B54

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__AADJLKMEKBF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  ProgressBar_o *pPVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  BECIPDJBAOG_o *pBVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  RaidConfig_EBEGCDCOHHJ_o *pJVar11;
  RaidConfig_EBEGCDCOHHJ_COMPPNIAOGK_o *pJVar12;
  BDMABHJEEGD_o *pBVar13;
  int32_t local_34;
  int local_28;
  int iStack_24;
  
  if ((DAT_04565ca3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_2441/*"<quad name=TopPanel.rating_icon max=120 />"*/);
    DAT_04565ca3 = 1;
  }
  local_34 = 0;
  pUVar5 = (__this->fields)._taskLayout;
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar5 = UnityEngine_GameObject__get_gameObject(pUVar5,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._noTaskLayout;
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar5 = UnityEngine_GameObject__get_gameObject(pUVar5,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__CCPABLFBFFA(__this,method_00);
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__JCJJOLALDGM(__this,method_01);
      pPVar6 = (__this->fields)._taskProgressBar;
      if ((pPVar6 != (ProgressBar_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._bestResultTitleLabel;
        if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
          pJVar11 = (__this->fields).MGIFEGEAHOB;
          if ((pJVar11 != (RaidConfig_EBEGCDCOHHJ_o *)0x0) &&
             (pJVar12 = (pJVar11->fields).HMAFPGLFDDP,
             pJVar12 != (RaidConfig_EBEGCDCOHHJ_COMPPNIAOGK_o *)0x0)) {
            uVar3 = (pJVar12->fields).BGHFADDGPAD;
            if ((uVar3 < 0xf) && ((1 << (ulong)(uVar3 & 0x1f) & 0x529aU) != 0)) {
              pPVar6 = (__this->fields)._taskProgressBar;
              if ((pPVar6 == (ProgressBar_o *)0x0) ||
                 (pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0),
                 pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03128e3c;
              UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
              pNVar7 = (__this->fields)._bestResultTitleLabel;
              if ((pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                 (pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
                 pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03128e3c;
              UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
            }
            pBVar13 = (__this->fields).NCJONEIOCML;
            if (pBVar13 != (BDMABHJEEGD_o *)0x0) {
              iVar1 = (pBVar13->fields).OOCPIHHNOBO;
              iVar2 = (pBVar13->fields).CLLIINPOPHO;
              pPVar6 = (__this->fields)._taskProgressBar;
              local_28 = iVar2;
              iStack_24 = iVar1;
              if (pPVar6 != (ProgressBar_o *)0x0) {
                (*(pPVar6->klass->vtable)._11_SetValueBorders.methodPtr)
                          (0,(float)iVar2,pPVar6,(pPVar6->klass->vtable)._11_SetValueBorders.method)
                ;
                pPVar6 = (__this->fields)._taskProgressBar;
                if (pPVar6 != (ProgressBar_o *)0x0) {
                  (*(pPVar6->klass->vtable)._8_SetValue.methodPtr)
                            ((float)iVar1,0,pPVar6,0,(pPVar6->klass->vtable)._8_SetValue.method);
                  if (iVar2 == 1) {
                    pPVar6 = (__this->fields)._taskProgressBar;
                    if ((pPVar6 == (ProgressBar_o *)0x0) ||
                       (pUVar5 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0),
                       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03128e3c;
                    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                    pNVar7 = (__this->fields)._bestResultTitleLabel;
                    if ((pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                       (pUVar5 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
                       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03128e3c;
                    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                  }
                  pNVar7 = (__this->fields)._taskProgressLbl;
                  pSVar8 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
                  pSVar9 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
                  pSVar8 = System_String__Concat(pSVar8,StringLiteral_1492/*"/"*/,pSVar9,(MethodInfo *)0x0)
                  ;
                  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                              (pNVar7,pSVar8,(pNVar7->klass->vtable)._75_set_text.method);
                    pBVar13 = (__this->fields).NCJONEIOCML;
                    if ((pBVar13 != (BDMABHJEEGD_o *)0x0) &&
                       (pBVar10 = (pBVar13->fields).MJIIHOLHNCK, pBVar10 != (BECIPDJBAOG_o *)0x0)) {
                      pNVar7 = (__this->fields)._taskRewardRatingLbl;
                      bVar4 = BECIPDJBAOG__HMCAGKEIIGO(pBVar10,(MethodInfo *)0x0);
                      pSVar8 = StringLiteral_2441/*"<quad name=TopPanel.rating_icon max=120 />"*/;
                      if (bVar4) {
                        pBVar13 = (__this->fields).NCJONEIOCML;
                        if ((pBVar13 == (BDMABHJEEGD_o *)0x0) ||
                           (pBVar10 = (pBVar13->fields).MJIIHOLHNCK, pBVar10 == (BECIPDJBAOG_o *)0x0
                           )) goto LAB_03128e3c;
                        local_34 = (pBVar10->fields).NLLKMEMKBAF;
                      }
                      else {
                        local_34 = 0;
                      }
                      pSVar9 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                      pSVar8 = System_String__Concat(pSVar8,pSVar9,(MethodInfo *)0x0);
                      if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        method_03 = (pNVar7->klass->vtable)._75_set_text.method;
                        (*(pNVar7->klass->vtable)._75_set_text.methodPtr)(pNVar7,pSVar8);
                        bVar4 = RaidQuestsManager__OALAPMJJBLJ
                                          ((__this->fields).NCJONEIOCML,(MethodInfo *)0x0);
                        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__SetRefreshButtonVisible
                                  (__this,bVar4,method_03);
                        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__OPLLGEBAFIO(__this,method_02)
                        ;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03128e3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void CCPABLFBFFA()  [RVA 0x30288B4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$CCPABLFBFFA @ RVA 0x30288B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__CCPABLFBFFA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *t;
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).BHMLAAAEHKA;
  t = *ppDVar1;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
    (__this->fields).BHMLAAAEHKA = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    (__this->fields).OLECEBGAGMI = 0;
    (__this->fields).DIONJIKONHC = 1;
  }
  return;
}


// ===== private void DPDPADFPOBP()  [RVA 0x3028E40]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$DPDPADFPOBP @ RVA 0x3028E40

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__DPDPADFPOBP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *CJNHFNHJHPE;
  BDMABHJEEGD_o *JOBNGBCPEGO;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04565ca4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_BHLHBBKAFHH__);
    DAT_04565ca4 = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__AIBHLHDCMIO(__this,method);
  if (bVar1) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__PHHHGGNFGLL(__this,method_00);
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__JKONMJEBNPH(__this,method_00);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  JOBNGBCPEGO = (__this->fields).NCJONEIOCML;
  if (JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0) {
    if ((JOBNGBCPEGO->fields).IMNALGKNMNP != (PGICCMFLDPI_o *)0x0) {
      iVar2 = RaidQuestsManager__FGJMKHPILFH(JOBNGBCPEGO,(MethodInfo *)0x0);
      (__this->fields).GIFMJFJDFFG = iVar2;
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__BHLHBBKAFHH(__this,method_01);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCJJOLALDGM()  [RVA 0x30282F4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$JCJJOLALDGM @ RVA 0x30282F4

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__JCJJOLALDGM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *extraout_x1;
  RaidConfig_EBEGCDCOHHJ_o *pJVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565ca5 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04565ca5 = 1;
    method = extraout_x1;
  }
  pJVar1 = (__this->fields).MGIFEGEAHOB;
  __this_00 = (__this->fields)._taskTitleLbl;
  if (pJVar1 == (RaidConfig_EBEGCDCOHHJ_o *)0x0) {
    ppSVar2 = &string_TypeInfo->static_fields->Empty;
  }
  else {
    ppSVar2 = &(pJVar1->fields).ABCHAOKFLGL;
  }
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,*ppSVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public int GetDailyQuestId()  [RVA 0x3029038]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$GetDailyQuestId @ RVA 0x3029038

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__GetDailyQuestId
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  BDMABHJEEGD_o *pBVar1;
  
  pBVar1 = (__this->fields).NCJONEIOCML;
  if (pBVar1 != (BDMABHJEEGD_o *)0x0) {
    return (pBVar1->fields).OHMDCKEDOGH;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateTaskInfo(BDMABHJEEGD JOBNGBCPEGO)  [RVA 0x3029054]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$UpdateTaskInfo @ RVA 0x3029054

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__UpdateTaskInfo
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,BDMABHJEEGD_o *JOBNGBCPEGO,
               MethodInfo *method)

{
  RaidConfig_o *__this_00;
  RaidConfig_EBEGCDCOHHJ_o *pJVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  BDMABHJEEGD_o *pBVar2;
  BDMABHJEEGD_o **ppBVar3;
  RaidConfig_EBEGCDCOHHJ_o **ppJVar4;
  
  if ((DAT_04565ca6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565ca6 = 1;
  }
  ppBVar3 = &(__this->fields).NCJONEIOCML;
  *ppBVar3 = JOBNGBCPEGO;
  thunk_FUN_01c20e04(ppBVar3,JOBNGBCPEGO);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((*ppBVar3 != (BDMABHJEEGD_o *)0x0) && (__this_00 != (RaidConfig_o *)0x0)) {
    pJVar1 = RaidConfig__NNCKFAHCIBE(__this_00,((*ppBVar3)->fields).OHMDCKEDOGH,(MethodInfo *)0x0);
    ppJVar4 = &(__this->fields).MGIFEGEAHOB;
    *ppJVar4 = pJVar1;
    thunk_FUN_01c20e04(ppJVar4,pJVar1);
    pBVar2 = (__this->fields).NCJONEIOCML;
    if (pBVar2 != (BDMABHJEEGD_o *)0x0) {
      if ((pBVar2->fields).IMNALGKNMNP == (PGICCMFLDPI_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__AADJLKMEKBF(__this,method_00);
        method_01 = extraout_x1_00;
      }
      else {
        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__HPADIJDOKDN(__this,method_00);
        method_01 = extraout_x1;
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__DPDPADFPOBP(__this,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BHLHBBKAFHH()  [RVA 0x3028FD0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$BHLHBBKAFHH @ RVA 0x3028FD0

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__BHLHBBKAFHH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  long ECLENFDGNKL;
  bool CJNHFNHJHPE;
  BDMABHJEEGD_o *JOBNGBCPEGO;
  SFRequestSender_o *__this_00;
  int64_t iVar1;
  MethodInfo *in_x2;
  
  JOBNGBCPEGO = (__this->fields).NCJONEIOCML;
  if (JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0) {
    if ((JOBNGBCPEGO->fields).IMNALGKNMNP == (PGICCMFLDPI_o *)0x0) {
      CJNHFNHJHPE = RaidQuestsManager__OALAPMJJBLJ(JOBNGBCPEGO,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__SetRefreshButtonVisible
                (__this,CJNHFNHJHPE,in_x2);
      return;
    }
    __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 != (SFRequestSender_o *)0x0) {
      iVar1 = SFRequestSender__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
      ECLENFDGNKL = (__this->fields).GIFMJFJDFFG - iVar1;
      if (-1 < ECLENFDGNKL) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__KGHBEACKHIB(__this,ECLENFDGNKL,in_x2);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ONHDLLLAFOF()  [RVA 0x3029348]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$ONHDLLLAFOF @ RVA 0x3029348

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__ONHDLLLAFOF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  RaidQuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ca7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565ca7 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (__this_00 != (RaidQuestsManager_o *)0x0) {
    RaidQuestsManager__DCELPLDINGL(__this_00,(__this->fields).NCJONEIOCML,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetRefreshButtonVisible(bool CJNHFNHJHPE)  [RVA 0x3026E14]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$SetRefreshButtonVisible @ RVA 0x3026E14

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__SetRefreshButtonVisible
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pNVar1 = (__this->fields)._taskRefreshBtn;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03126e40 to 03226efb has its CatchHandler @ 03126e40
                       catch() { ... } // from try @ 03126e40 with catch @ 03126e40
                       catch() { ... } // from try @ 03126f70 with catch @ 03126e40
                       catch() { ... } // from try @ 03126fc0 with catch @ 03126e40
                       catch() { ... } // from try @ 03126fec with catch @ 03126e40
                       catch() { ... } // from try @ 0312701c with catch @ 03126e40 */
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._taskRefreshBtn;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(BDMABHJEEGD JOBNGBCPEGO)  [RVA 0x30293B0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$Init @ RVA 0x30293B0

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,BDMABHJEEGD_o *JOBNGBCPEGO,
               MethodInfo *method)

{
  ProgressBar_o *pPVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar3;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar4;
  LabelButton_o *pLVar5;
  UnityEngine_Events_UnityEvent_o *pUVar6;
  BDMABHJEEGD_o **ppBVar7;
  
  if ((DAT_04565ca8 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_DJPPAELDLFC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_JOMJIANNMPK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_ONHDLLLAFOF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565ca8 = 1;
  }
  ppBVar7 = &(__this->fields).NCJONEIOCML;
  *ppBVar7 = JOBNGBCPEGO;
  thunk_FUN_01c20e04(ppBVar7,JOBNGBCPEGO);
  pPVar1 = (__this->fields)._taskProgressBar;
  if (pPVar1 != (ProgressBar_o *)0x0) {
    (*(pPVar1->klass->vtable)._7_set_Value.methodPtr)
              (0,pPVar1,(pPVar1->klass->vtable)._7_set_Value.method);
    pNVar4 = (__this->fields)._taskRefreshBtn;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pNVar4->fields).super.super.m_OnClick;
      pUVar2 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar2,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._TaskRefreshADViewsLabel;
        if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          pLVar5 = (__this->fields)._btnSkipCooldown;
          if (pLVar5 != (LabelButton_o *)0x0) {
            pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick
            ;
            pUVar2 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              method_00 = (MethodInfo *)0x0;
              UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar2,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__UpdateTaskInfo
                        (__this,(__this->fields).NCJONEIOCML,method_00);
              pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                 (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
              source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar3,(MethodInfo *)0x0);
              onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
              System_Action<Unit>___ctor();
              pIVar3 = (Il2CppObject *)
                       UniRx_ObservableExtensions__Subscribe<Unit>
                                 ((System_IObservable_T__o *)source,onNext,
                                  Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
              UniRx_DisposableExtensions__AddTo<object>
                        (pIVar3,(UnityEngine_Component_o *)__this,
                         Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
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


// ===== private void JOMJIANNMPK()  [RVA 0x30295B8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$JOMJIANNMPK @ RVA 0x30295B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__JOMJIANNMPK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  AdvertisingViewsManager_o *__this_00;
  System_String_o *pSVar1;
  System_Action_object__o *IELDNEAAPBE;
  int32_t local_54;
  
  if ((DAT_04565ca9 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_HBNFNAJANGK__);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_17818/*"dlgRaidDailyRenewTitle"*/);
    FUN_01bab630(&StringLiteral_17817/*"dlgRaidDailyRenewMessageAdvertising{"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_18351/*"freeWithIcon{img::MiscSprites.video_large scale=0.3}"*/);
    DAT_04565ca9 = 1;
  }
  __this_00 = AdvertisingViewsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (AdvertisingViewsManager_o *)0x0) {
    local_54 = AdvertisingViewsManager__LAPHEMPOHMP(__this_00,0xd,1,(MethodInfo *)0x0);
    pSVar1 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_17817/*"dlgRaidDailyRenewMessageAdvertising{"*/,pSVar1,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0)
    ;
    IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    DialogsOpener__JNDPLPKDPCP
              (StringLiteral_17818/*"dlgRaidDailyRenewTitle"*/,pSVar1,StringLiteral_18351/*"freeWithIcon{img::MiscSprites.video_large scale=0.3}"*/,StringLiteral_3640/*"CANCEL"*/,IELDNEAAPBE,1,0,
               false,false,StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float NFMPCDHBCLP()  [RVA 0x302976C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$NFMPCDHBCLP @ RVA 0x302976C

float Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__NFMPCDHBCLP
                (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  float fVar1;
  
  if ((DAT_04565caa & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Item__);
    DAT_04565caa = 1;
  }
  __this_00 = (__this->fields).KPKPCPFOGAP;
  if (((__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
      (__this_01 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              (__this->fields).OLECEBGAGMI,
                              Method_System_Collections_Generic_List<GameObject>_get_Item__),
      __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_02 = (UnityEngine_CanvasGroup_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_01,Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__),
     __this_02 != (UnityEngine_CanvasGroup_o *)0x0)) {
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_02,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PHHHGGNFGLL()  [RVA 0x3028F34]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$PHHHGGNFGLL @ RVA 0x3028F34

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__PHHHGGNFGLL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  if ((DAT_04565cab & 1) == 0) {
    FUN_01bab630(&StringLiteral_1258/*"--:--"*/);
    DAT_04565cab = 1;
  }
  __this_00 = (__this->fields)._btnSkipCooldown;
  if ((__this_00 != (LabelButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._beforeNextTaskLbl;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03128fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,StringLiteral_1258/*"--:--"*/,(pNVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KGHBEACKHIB(long ECLENFDGNKL)  [RVA 0x3029124]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$KGHBEACKHIB @ RVA 0x3029124

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__KGHBEACKHIB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,int64_t ECLENFDGNKL,
               MethodInfo *method)

{
  uint32_t uVar1;
  bool value;
  System_String_o *pSVar2;
  RaidConfig_o *pJVar3;
  int64_t iVar4;
  UnityEngine_GameObject_o *pUVar5;
  RaidConfig_NMAJABPDEPE_o *pJVar6;
  LabelButton_o *pLVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  int local_34;
  
  if ((DAT_04565cac & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LocalizationManager_TypeInfo);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_2429/*"<quad name=MiscSprites.ruby size=100 offsety=-5 /> "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565cac = 1;
  }
  local_34 = 0;
  pNVar8 = (__this->fields)._beforeNextTaskLbl;
  if ((LocalizationManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = LocalizationManager__BCGDPKJNJCH
                     (ECLENFDGNKL,true,true,0xe0f < ECLENFDGNKL,0x1517f < ECLENFDGNKL,
                      StringLiteral_2086/*":"*/,true,true,true,true,StringLiteral_1/*""*/,StringLiteral_1/*""*/,
                      StringLiteral_1/*""*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
              (pNVar8,pSVar2,(pNVar8->klass->vtable)._75_set_text.method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar3 != (RaidConfig_o *)0x0) &&
       (pJVar6 = (pJVar3->fields)._IGLEEEJGEEJ_k__BackingField,
       pJVar6 != (RaidConfig_NMAJABPDEPE_o *)0x0)) {
      uVar1 = (pJVar6->fields).OAFBLBIBJBG;
      pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar3 != (RaidConfig_o *)0x0) &&
         (pJVar6 = (pJVar3->fields)._IGLEEEJGEEJ_k__BackingField,
         pJVar6 != (RaidConfig_NMAJABPDEPE_o *)0x0)) {
        value = false;
        if ((uVar1 != 0) && ((pJVar6->fields).DCOMFGPIBOE != 0)) {
          iVar4 = RaidQuestsManager__EEADODOOCCB((__this->fields).NCJONEIOCML,(MethodInfo *)0x0);
          local_34 = (int)iVar4;
          if (((__this->fields).LIIAOOJGEML != local_34) &&
             ((__this->fields).LIIAOOJGEML = local_34, 0 < local_34)) {
            pLVar7 = (__this->fields)._btnSkipCooldown;
            pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
            pSVar2 = System_String__Concat(StringLiteral_2429/*"<quad name=MiscSprites.ruby size=100 offsety=-5 /> "*/,pSVar2,(MethodInfo *)0x0);
            if (pLVar7 == (LabelButton_o *)0x0) goto LAB_03129344;
            LabelButton__set_Text(pLVar7,pSVar2,(MethodInfo *)0x0);
          }
          value = local_34 != 0;
        }
        pLVar7 = (__this->fields)._btnSkipCooldown;
        if ((pLVar7 != (LabelButton_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar5,value,(MethodInfo *)0x0);
          pNVar8 = (__this->fields)._getTaskNowLbl;
          if ((pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
             pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar5,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_03129344:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

