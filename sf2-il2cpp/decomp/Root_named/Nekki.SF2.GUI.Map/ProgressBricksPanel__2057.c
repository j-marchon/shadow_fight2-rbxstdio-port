// TypeDefIndex 2057
// Namespace: Nekki.SF2.GUI.Map
// public class ProgressBricksPanel : MonoBehaviour
// Fields:
//   public const float INDICATOR_SMALL_SCALE = 0.71;
//   public const float INDICATOR_NORMAL_SCALE = 1;
//   public const float INDICATOR_IMAGE_SIZE = 96;
//   public const float INDICATOR_PADDING_X = -5;
//   public const int MAX_BIG_ICON_FIGHTS = 5;
//   private const ushort HBNPNDDAMEJ = 6;
//   private const ushort OOPAMBKCDIJ = 8;
//   private LabelAlias _lblTour; // 0x20
//   private GameObject IndicatorFightPrefab; // 0x28
//   private List<ProgressBricksPanel.ABGKGNLGPKB> FBAIPCAJMEN; // 0x30

// ===== private void GBCCLPCBNPJ(int DFIBGGDJPLM)  [RVA 0x32B62DC]
// Nekki.SF2.GUI.Map.ProgressBricksPanel$$GBCCLPCBNPJ @ RVA 0x32B62DC

void Nekki_SF2_GUI_Map_ProgressBricksPanel__GBCCLPCBNPJ
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this,int32_t DFIBGGDJPLM,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_Map_IndicatorFight_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_o *__this_02;
  System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *pSVar3;
  Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_array *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  Nekki_SF2_GUI_Map_IndicatorFight_o **ppNVar6;
  int iVar7;
  
  if ((DAT_04567458 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<IndicatorFight>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_get_Count__
                );
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567458 = 1;
  }
  pSVar3 = (__this->fields).FBAIPCAJMEN;
  if (pSVar3 == (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
LAB_033b64c8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar7 = (pSVar3->fields)._size;
  if ((iVar7 < DFIBGGDJPLM) && (iVar7 = DFIBGGDJPLM - iVar7, 0 < iVar7)) {
    do {
      pUVar5 = (__this->fields).IndicatorFightPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar5 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar5,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
          (__this_00 = (Nekki_SF2_GUI_Map_IndicatorFight_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (pUVar5,
                                  Method_UnityEngine_GameObject_GetComponent<IndicatorFight>__),
          __this_00 == (Nekki_SF2_GUI_Map_IndicatorFight_o *)0x0)) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033b64c8;
      __this_01 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_033b64c8;
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).FBAIPCAJMEN;
      __this_02 = (Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_o *)
                  thunk_FUN_01bda818(Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (__this_02 == (Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_o *)0x0)
      goto LAB_033b64c8;
      ppNVar6 = &(__this_02->fields).IGEKJBGFJBL;
      *ppNVar6 = __this_00;
      thunk_FUN_01c20e04(ppNVar6,__this_00);
      (__this_02->fields).OFKNMBPGOGL = false;
      lVar2 = Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_Add__;
      if (pSVar3 == (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0)
      goto LAB_033b64c8;
      pNVar4 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pNVar4 == (Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_array *)0x0)
      goto LAB_033b64c8;
      uVar1 = (pSVar3->fields)._size;
      if (uVar1 < (uint)pNVar4->max_length) {
        (pSVar3->fields)._size = uVar1 + 1;
        pNVar4->m_Items[(int)uVar1] = __this_02;
        thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,__this_02);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_02,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}


// ===== public void Init(OOMHDDBCBJP BANHBMINMMP, FightList AGONJKOMAAA)  [RVA 0x32B64D4]
// Nekki.SF2.GUI.Map.ProgressBricksPanel$$Init @ RVA 0x32B64D4

void Nekki_SF2_GUI_Map_ProgressBricksPanel__Init
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               FightList_o *AGONJKOMAAA,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  float CJNHFNHJHPE;
  int32_t iVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Il2CppObject *pIVar7;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  System_Action_ProgressBricksPanel_ABGKGNLGPKB__o **ppSVar8;
  uint CJNHFNHJHPE_00;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int DFIBGGDJPLM;
  System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *pSVar14;
  System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *pSVar15;
  int EDGFNGCAKGI;
  Nekki_SF2_GUI_Map_IndicatorFight_o *__this_04;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector2_o UVar19;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar20;
  
  if ((DAT_04567459 & 1) == 0) {
    FUN_01bab630(&System_Action<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_ForEach__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_get_Item__
                );
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_IHBODMGFKHI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_IPALKFADGLP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_LPMJOENNLJO__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567459 = 1;
  }
  pSVar14 = (__this->fields).FBAIPCAJMEN;
  if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar15 = Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_0;
  if (pSVar15 == (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar15 = (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)
              thunk_FUN_01bda818(System_Action<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar8 = &Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_0;
    *ppSVar8 = pSVar15;
    thunk_FUN_01c20e04(ppSVar8,pSVar15);
  }
  if (pSVar14 == (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0)
  goto LAB_033b6b24;
  System_Collections_Generic_List<object>__ForEach
            ((System_Collections_Generic_List_object__o *)pSVar14,(System_Action_T__o *)pSVar15,
             Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_ForEach__);
  pNVar6 = (__this->fields)._lblTour;
  if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033b6b24;
  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pNVar6 = (__this->fields)._lblTour;
  if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033b6b24;
  method_00 = (pNVar6->klass->vtable)._75_set_text.method;
  (*(pNVar6->klass->vtable)._75_set_text.methodPtr)(pNVar6,StringLiteral_1/*""*/);
  if ((BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  (*(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.methodPtr)
                            (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.method),
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_033b6b24;
  DFIBGGDJPLM = (__this_00->fields)._size;
  iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  if ((iVar5 == 2) ||
     ((iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar5 == 10 ||
      (iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar5 == 0x15)))) {
    DFIBGGDJPLM = DFIBGGDJPLM + -1;
  }
  if (AGONJKOMAAA == (FightList_o *)0x0) goto LAB_033b6b24;
  if (((AGONJKOMAAA->fields).HLFBMBHOPMI == DFIBGGDJPLM) &&
     ((iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar5 == 2 ||
      (iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar5 == 10)))) {
    pSVar14 = (__this->fields).FBAIPCAJMEN;
    if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar15 = Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_1;
    if (pSVar15 == (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
      if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar15 = (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)
                thunk_FUN_01bda818(System_Action<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar8 = &Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_1;
      *ppSVar8 = pSVar15;
LAB_033b6ae0:
      thunk_FUN_01c20e04(ppSVar8,pSVar15);
    }
  }
  else {
    Nekki_SF2_GUI_Map_ProgressBricksPanel__GBCCLPCBNPJ(__this,DFIBGGDJPLM,method_00);
    CJNHFNHJHPE = 0.71;
    if (DFIBGGDJPLM < 6) {
      CJNHFNHJHPE = 1.0;
    }
    iVar9 = 8;
    if (DFIBGGDJPLM < 0xd) {
      iVar9 = 6;
    }
    if (DAT_0456033d == '\0') {
      FUN_01bab630(&System_Math_TypeInfo);
      DAT_0456033d = '\x01';
    }
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = -0x80000000;
    if ((float)(int)((float)DFIBGGDJPLM / (float)iVar9) != INFINITY) {
      iVar1 = (int)((float)DFIBGGDJPLM / (float)iVar9);
    }
    __this_01 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((__this_01 == (UnityEngine_RectTransform_o *)0x0) ||
       (__this_01->klass != UnityEngine_RectTransform_TypeInfo)) goto LAB_033b6b24;
    fVar18 = CJNHFNHJHPE * 96.0;
    UVar19 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    value.fields.y = fVar18 * (float)iVar1;
    value.fields.x = UVar19.fields.x;
    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
    if (iVar1 < 1) {
      EDGFNGCAKGI = 0;
    }
    else {
      iVar4 = 0;
      if (iVar9 != 0) {
        iVar4 = DFIBGGDJPLM / iVar9;
      }
      iVar11 = 0;
      EDGFNGCAKGI = 0;
      iVar12 = 0;
      fVar16 = fVar18 * ((float)iVar1 * 0.5 + -0.5);
      do {
        iVar10 = iVar9;
        if (iVar12 == iVar1 + -1) {
          iVar10 = DFIBGGDJPLM - iVar4 * iVar9;
        }
        iVar13 = iVar9;
        if (iVar10 != 0) {
          iVar13 = iVar10;
        }
        if (0 < iVar13) {
          fVar17 = fVar18 * 0.5 +
                   (fVar18 * (float)iVar13 + CJNHFNHJHPE * -5.0 * (float)(iVar13 + -1)) * -0.5;
          iVar10 = iVar11;
          do {
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               (__this_00,iVar10,
                                Method_System_Collections_Generic_List<FightList>_get_Item__);
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_033b6b24;
            iVar2 = *(int *)((long)&pIVar7[6].klass + 4);
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               (__this_00,iVar10,
                                Method_System_Collections_Generic_List<FightList>_get_Item__);
            if ((pIVar7 == (Il2CppObject *)0x0) ||
               (pSVar14 = (__this->fields).FBAIPCAJMEN,
               pSVar14 == (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0)
               ) goto LAB_033b6b24;
            cVar3 = *(char *)&pIVar7[6].monitor;
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar14,iVar10,
                                Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_get_Item__
                               );
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_033b6b24;
            __this_04 = pIVar7[1].monitor;
            *(undefined1 *)&pIVar7[1].klass = 1;
            if (cVar3 == '\0') {
              if (__this_04 == (Nekki_SF2_GUI_Map_IndicatorFight_o *)0x0) goto LAB_033b6b24;
              CJNHFNHJHPE_00 = (uint)(iVar2 != 1);
            }
            else {
              if (__this_04 == (Nekki_SF2_GUI_Map_IndicatorFight_o *)0x0) goto LAB_033b6b24;
              CJNHFNHJHPE_00 = 2;
            }
            Nekki_SF2_GUI_Map_IndicatorFight__set_CurrentState
                      (__this_04,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_IndicatorFight__set_Scale(__this_04,CJNHFNHJHPE,(MethodInfo *)0x0);
            __this_02 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            __this_03 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            if (__this_03 == (UnityEngine_Transform_o *)0x0) goto LAB_033b6b24;
            UVar20 = UnityEngine_Transform__get_localPosition(__this_03,(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_Transform_o *)0x0) goto LAB_033b6b24;
            UVar20.fields.y = fVar16;
            UVar20.fields.x = fVar17;
            UnityEngine_Transform__set_localPosition(__this_02,UVar20,(MethodInfo *)0x0);
            fVar17 = fVar18 + CJNHFNHJHPE * -5.0 + fVar17;
            if (iVar2 == 1) {
              EDGFNGCAKGI = EDGFNGCAKGI + 1;
            }
            iVar13 = iVar13 + -1;
            iVar10 = iVar10 + 1;
          } while (iVar13 != 0);
        }
        fVar16 = fVar16 - fVar18;
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + iVar9;
      } while (iVar12 != iVar1);
    }
    Nekki_SF2_GUI_Map_ProgressBricksPanel__LBOHIOPPJOF
              (__this,BANHBMINMMP,DFIBGGDJPLM,EDGFNGCAKGI,true,in_x5);
    pSVar14 = (__this->fields).FBAIPCAJMEN;
    if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar15 = Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_2;
    if (pSVar15 == (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
      if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar15 = (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)
                thunk_FUN_01bda818(System_Action<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar8 = &Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_2;
      *ppSVar8 = pSVar15;
      goto LAB_033b6ae0;
    }
  }
  if (pSVar14 != (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar14,(System_Action_T__o *)pSVar15,
               Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_ForEach__);
    return;
  }
LAB_033b6b24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LBOHIOPPJOF(OOMHDDBCBJP BANHBMINMMP, int JPMOAIDONML, int EDGFNGCAKGI, bool CAIIMHHPGMA)  [RVA 0x32B6B28]
// Nekki.SF2.GUI.Map.ProgressBricksPanel$$LBOHIOPPJOF @ RVA 0x32B6B28

void Nekki_SF2_GUI_Map_ProgressBricksPanel__LBOHIOPPJOF
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               int32_t JPMOAIDONML,int32_t EDGFNGCAKGI,bool CAIIMHHPGMA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *str2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_48;
  int32_t local_44;
  
  local_44 = JPMOAIDONML;
  if ((DAT_0456745a & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22506/*"}{"*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_16947/*"challengeBoss"*/);
    FUN_01bab630(&StringLiteral_16739/*"bodyguards"*/);
    FUN_01bab630(&StringLiteral_21187/*"stage{"*/);
    DAT_0456745a = 1;
  }
  local_48 = 0;
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_033b6f60;
  uVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  if (uVar3 < 0x16) {
    uVar3 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar3 & 0x12021a) == 0) {
      if ((uVar3 & 0x200404) == 0) {
        return;
      }
      __this_00 = (__this->fields)._lblTour;
      pSVar4 = StringLiteral_16739/*"bodyguards"*/;
      if (!CAIIMHHPGMA) {
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar6 = Method_System_Array_Empty<string>__;
        pSVar4 = (BANHBMINMMP->fields).ICPECIILDFJ;
        lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar8 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar8 = *(long *)(lVar6 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01b81620();
        }
        if (pIVar5 != (Il2CppObject *)0x0) {
          pIVar9 = pIVar5->klass;
          uVar12 = **(undefined8 **)(lVar6 + 0xb8);
          uVar1._0_1_ = (pIVar9->_2).rank;
          uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar1;
          if (uVar10 != 0) {
            piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar7 = pIVar9->vtable + (*piVar11 + 0xc);
                goto LAB_033b6e34;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033b6e34:
          pSVar4 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,pSVar4,uVar12,pVVar7->method);
          pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar6 = Method_System_Array_Empty<string>__;
          lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar8 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar8 = *(long *)(lVar6 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01b81620();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01b81620();
          }
          uVar12 = StringLiteral_16947/*"challengeBoss"*/;
          if (pIVar5 != (Il2CppObject *)0x0) {
            pIVar9 = pIVar5->klass;
            uVar13 = **(undefined8 **)(lVar6 + 0xb8);
            uVar2._0_1_ = (pIVar9->_2).rank;
            uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar2;
            if (uVar10 != 0) {
              piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar7 = pIVar9->vtable + (*piVar11 + 0xc);
                  goto LAB_033b6f0c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033b6f0c:
            str2 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar12,uVar13,pVVar7->method);
            pSVar4 = System_String__Concat(pSVar4,StringLiteral_167/*" "*/,str2,(MethodInfo *)0x0);
            if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                        (__this_00,pSVar4,(__this_00->klass->vtable)._75_set_text.method);
              return;
            }
          }
        }
        goto LAB_033b6f60;
      }
    }
    else {
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values == (System_String_array *)0x0) goto LAB_033b6f60;
      if ((int)values->max_length == 0) {
LAB_033b6f5c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = StringLiteral_21187/*"stage{"*/;
      thunk_FUN_01c20e04(values->m_Items);
      local_48 = EDGFNGCAKGI + 1;
      pSVar4 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto LAB_033b6f5c;
      values->m_Items[1] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar4);
      if ((uint)values->max_length < 3) goto LAB_033b6f5c;
      values->m_Items[2] = StringLiteral_22506/*"}{"*/;
      thunk_FUN_01c20e04(values->m_Items + 2);
      pSVar4 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      if ((uint)values->max_length < 4) goto LAB_033b6f5c;
      values->m_Items[3] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 3,pSVar4);
      if ((uint)values->max_length < 5) goto LAB_033b6f5c;
      values->m_Items[4] = StringLiteral_22500/*"}"*/;
      thunk_FUN_01c20e04();
      pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._lblTour;
    }
    if (__this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
LAB_033b6f60:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,pSVar4,(MethodInfo *)0x0);
  }
  return;
}


// ===== public void .ctor()  [RVA 0x32B6F64]
// Nekki.SF2.GUI.Map.ProgressBricksPanel$$.ctor @ RVA 0x32B6F64

void Nekki_SF2_GUI_Map_ProgressBricksPanel___ctor
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *__this_00;
  System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456745b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
    DAT_0456745b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>__ctor__);
  ppSVar1 = &(__this->fields).FBAIPCAJMEN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

