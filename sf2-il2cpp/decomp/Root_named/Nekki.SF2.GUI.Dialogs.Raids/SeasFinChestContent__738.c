// TypeDefIndex 738
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class SeasFinChestContent : SeasFinBaseContent
// Fields:
//   private const float HNFHBCIEIKP = 0.75;
//   private const float HODLOCLGLHJ = 0.01;
//   private SFButton _showChestRewardBtn; // 0x40
//   private CocosAnimation _chestAnimation; // 0x48
//   private ResolutionImage _picChest; // 0x50
//   private ResolutionImage _bottomStar1; // 0x58
//   private ResolutionImage _bottomStar2; // 0x60
//   private RaidConfig.FNILDHLJBBJ KBMOPEKFNNN; // 0x68

// ===== private void Update()  [RVA 0x3047F48]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$Update @ RVA 0x3047F48

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__Update
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  
  pNVar1 = (__this->fields)._bottomStar1;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UnityEngine_TransformExtensions__AddLocalRotationZ(pUVar2,fVar3 * 15.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._bottomStar2;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UnityEngine_TransformExtensions__AddLocalRotationZ(pUVar2,fVar3 * 15.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3047FC4]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$.ctor @ RVA 0x3047FC4

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OIHPDGOBHEM()  [RVA 0x3047FCC]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$OIHPDGOBHEM @ RVA 0x3047FCC

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__OIHPDGOBHEM
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar6;
  System_Collections_Generic_List_Sequence__o *__this_00;
  DG_Tweening_Sequence_array *pDVar7;
  
  if ((DAT_04565df6 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_Add__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    FUN_01bab630(&StringLiteral_12922/*"Textures/Sequences/"*/);
    FUN_01bab630(&StringLiteral_10856/*"RaidGiantChests.effect_chest_back_light"*/);
    DAT_04565df6 = 1;
  }
  pNVar4 = (__this->fields)._bottomStar2;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,StringLiteral_10856/*"RaidGiantChests.effect_chest_back_light"*/,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._bottomStar2;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      uVar3 = StringLiteral_12922/*"Textures/Sequences/"*/._4_4_;
      (pNVar4->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_12922/*"Textures/Sequences/"*/;
      (pNVar4->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar3;
      thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
      pNVar4 = (__this->fields)._bottomStar2;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(pUVar5,1.0,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._bottomStar2;
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalRotationZ(pUVar5,22.5,(MethodInfo *)0x0);
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pNVar4 = (__this->fields)._bottomStar2;
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
            pDVar6 = DG_Tweening_ShortcutExtensions__DOScale(pUVar5,0.5,1.0,(MethodInfo *)0x0);
            DG_Tweening_TweenSettingsExtensions__Append
                      (s,(DG_Tweening_Tween_o *)pDVar6,(MethodInfo *)0x0);
            DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.1,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._bottomStar2;
            if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              pUVar5 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
              pDVar6 = DG_Tweening_ShortcutExtensions__DOScale(pUVar5,1.0,1.0,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__Append
                        (s,(DG_Tweening_Tween_o *)pDVar6,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.1,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                        ((Il2CppObject *)s,-1,0,
                         Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
              lVar2 = Method_System_Collections_Generic_List<Sequence>_Add__;
              __this_00 = (__this->fields).super.HHEDCPBLJHD;
              if (__this_00 != (System_Collections_Generic_List_Sequence__o *)0x0) {
                pDVar7 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pDVar7 != (DG_Tweening_Sequence_array *)0x0) {
                  uVar1 = (__this_00->fields)._size;
                  if (uVar1 < (uint)pDVar7->max_length) {
                    (__this_00->fields)._size = uVar1 + 1;
                    pDVar7->m_Items[(int)uVar1] = s;
                    thunk_FUN_01c20e04(pDVar7->m_Items + (int)uVar1,s);
                    return;
                  }
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)s,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MLPCOKOBCLM()  [RVA 0x30481F4]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$MLPCOKOBCLM @ RVA 0x30481F4

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__MLPCOKOBCLM
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  System_Collections_Generic_List_Sequence__o *__this_00;
  DG_Tweening_Sequence_array *pDVar5;
  
  if ((DAT_04565df7 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_Add__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_GNOGHFKDPEO__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04565df7 = 1;
  }
  pNVar3 = (__this->fields)._picChest;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(pUVar4,0.01,(MethodInfo *)0x0);
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    pNVar3 = (__this->fields)._picChest;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      t = DG_Tweening_ShortcutExtensions__DOScale(pUVar4,0.75,0.305,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
      callback = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(s,callback,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<Sequence>_Add__;
      __this_00 = (__this->fields).super.HHEDCPBLJHD;
      if (__this_00 != (System_Collections_Generic_List_Sequence__o *)0x0) {
        pDVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pDVar5 != (DG_Tweening_Sequence_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pDVar5->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pDVar5->m_Items[(int)uVar1] = s;
            thunk_FUN_01c20e04(pDVar5->m_Items + (int)uVar1,s);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)s,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x3048384]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$OnDestroy @ RVA 0x3048384

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void GNOGHFKDPEO()  [RVA 0x304838C]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$GNOGHFKDPEO @ RVA 0x304838C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__GNOGHFKDPEO
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  SFButton_o *__this_00;
  System_String_o *pSVar2;
  CocosAnimation_o *pCVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  RaidConfig_FNILDHLJBBJ_o *pJVar4;
  undefined8 *puVar5;
  System_String_o *EIJDDKJONFO;
  UnityEngine_Vector2_o CJNHFNHJHPE;
  
  if ((DAT_04565df8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20408/*"raid_blicks"*/);
    FUN_01bab630(&StringLiteral_12929/*"Textures/Sequences/effect_chest_silver_blicks"*/);
    FUN_01bab630(&StringLiteral_18661/*"gold"*/);
    FUN_01bab630(&StringLiteral_21048/*"silver"*/);
    FUN_01bab630(&StringLiteral_16801/*"bronze"*/);
    FUN_01bab630(&StringLiteral_12928/*"Textures/Sequences/effect_chest_raid_blicks"*/);
    FUN_01bab630(&StringLiteral_12927/*"Textures/Sequences/effect_chest_gold_blicks"*/);
    FUN_01bab630(&StringLiteral_12926/*"Textures/Sequences/effect_chest_bronze_blicks"*/);
    DAT_04565df8 = 1;
  }
  __this_00 = (__this->fields)._showChestRewardBtn;
  bVar1 = false;
  if (__this_00 == (SFButton_o *)0x0) goto LAB_0314859c;
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
  pJVar4 = (__this->fields).KBMOPEKFNNN;
  if ((pJVar4 == (RaidConfig_FNILDHLJBBJ_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pJVar4->fields).ICGHMKGHKEH,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  pJVar4 = (__this->fields).KBMOPEKFNNN;
  bVar1 = false;
  if (pJVar4 == (RaidConfig_FNILDHLJBBJ_o *)0x0) goto LAB_0314859c;
  pSVar2 = (pJVar4->fields).ICGHMKGHKEH;
  bVar1 = false;
  if (pSVar2 == (System_String_o *)0x0) goto LAB_0314859c;
  pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
  bVar1 = false;
  if (pSVar2 == (System_String_o *)0x0) goto LAB_0314859c;
  bVar1 = System_String__Contains(pSVar2,StringLiteral_20408/*"raid_blicks"*/,(MethodInfo *)0x0);
  if (bVar1) {
    puVar5 = &StringLiteral_12928/*"Textures/Sequences/effect_chest_raid_blicks"*/;
LAB_031484d4:
    EIJDDKJONFO = (System_String_o *)*puVar5;
  }
  else {
    bVar1 = System_String__Contains(pSVar2,StringLiteral_16801/*"bronze"*/,(MethodInfo *)0x0);
    if (bVar1) {
      puVar5 = &StringLiteral_12926/*"Textures/Sequences/effect_chest_bronze_blicks"*/;
      goto LAB_031484d4;
    }
    bVar1 = System_String__Contains(pSVar2,StringLiteral_21048/*"silver"*/,(MethodInfo *)0x0);
    if (bVar1) {
      puVar5 = &StringLiteral_12929/*"Textures/Sequences/effect_chest_silver_blicks"*/;
      goto LAB_031484d4;
    }
    bVar1 = System_String__Contains(pSVar2,StringLiteral_18661/*"gold"*/,(MethodInfo *)0x0);
    EIJDDKJONFO = StringLiteral_12927/*"Textures/Sequences/effect_chest_gold_blicks"*/;
    if (!bVar1) {
      EIJDDKJONFO = pSVar2;
    }
  }
  pCVar3 = (__this->fields)._chestAnimation;
  bVar1 = false;
  if (pCVar3 != (CocosAnimation_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0);
    bVar1 = false;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      pCVar3 = (__this->fields)._chestAnimation;
      bVar1 = false;
      if (pCVar3 != (CocosAnimation_o *)0x0) {
        (pCVar3->fields)._autoSize = false;
        bVar1 = CocosAnimation__Init(pCVar3,EIJDDKJONFO,0,(System_String_o *)0x0,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._chestAnimation;
        if (pCVar3 != (CocosAnimation_o *)0x0) {
          __this_02 = (pCVar3->fields)._MPAMHJJKABE_k__BackingField;
          bVar1 = false;
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
            CJNHFNHJHPE = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
            CocosAnimation__set_ChildSize(pCVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
            pCVar3 = (__this->fields)._chestAnimation;
            bVar1 = false;
            if (pCVar3 != (CocosAnimation_o *)0x0) {
              (pCVar3->fields)._FEBBHCOAEMI_k__BackingField = 1;
              (pCVar3->fields)._PPEGDOHGLJJ_k__BackingField = 0.06;
              (pCVar3->fields)._NOAJIBNJKPE_k__BackingField = true;
              CocosAnimation__SetFirstFrame(pCVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0314859c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}


// ===== private void EELNMLDFJDN()  [RVA 0x30485A0]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$EELNMLDFJDN @ RVA 0x30485A0

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__EELNMLDFJDN
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Transform_o *transform;
  
  if ((DAT_04565df9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12922/*"Textures/Sequences/"*/);
    FUN_01bab630(&StringLiteral_10856/*"RaidGiantChests.effect_chest_back_light"*/);
    DAT_04565df9 = 1;
  }
  pNVar2 = (__this->fields)._bottomStar1;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_10856/*"RaidGiantChests.effect_chest_back_light"*/,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._bottomStar1;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      uVar1 = StringLiteral_12922/*"Textures/Sequences/"*/._4_4_;
      (pNVar2->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_12922/*"Textures/Sequences/"*/;
      (pNVar2->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
      thunk_FUN_01c20e04(&(pNVar2->fields).super.m_PixelsPerUnitMultiplier);
      pNVar2 = (__this->fields)._bottomStar2;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalRotationZ(transform,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(RaidConfig.FNILDHLJBBJ GDGBNEPJEOO)  [RVA 0x304863C]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$Init @ RVA 0x304863C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,
               RaidConfig_FNILDHLJBBJ_o *GDGBNEPJEOO,MethodInfo *method)

{
  System_String_o *EELDDPEAGGA;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  CocosAnimation_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  RaidConfig_FNILDHLJBBJ_o *pJVar1;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_03;
  RaidConfig_FNILDHLJBBJ_o **ppJVar3;
  
  if ((DAT_04565dfa & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_21095/*"snd_"*/);
    FUN_01bab630(&StringLiteral_16226/*"_sound"*/);
    DAT_04565dfa = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,false,1,StringLiteral_9679/*"OK"*/,
             false,1,StringLiteral_3640/*"CANCEL"*/,(MethodInfo *)0x0);
  ppJVar3 = &(__this->fields).KBMOPEKFNNN;
  *ppJVar3 = GDGBNEPJEOO;
  thunk_FUN_01c20e04(ppJVar3,GDGBNEPJEOO);
  if (*ppJVar3 != (RaidConfig_FNILDHLJBBJ_o *)0x0) {
    EELDDPEAGGA = System_String__Concat
                            (StringLiteral_21095/*"snd_"*/,((*ppJVar3)->fields).HILNENCJHMI,
                             StringLiteral_16226/*"_sound"*/,(MethodInfo *)0x0);
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
    }
    PNLFHHJGDLI__CJKCKACIIHK(EELDDPEAGGA,false,1.0,1.0,(MethodInfo *)0x0);
    pJVar1 = (__this->fields).KBMOPEKFNNN;
    if ((pJVar1 == (RaidConfig_FNILDHLJBBJ_o *)0x0) ||
       (__this_00 = (__this->fields)._picChest, __this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)
       ) goto LAB_03148814;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (__this_00,(pJVar1->fields).KDHKFELBFJN,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._chestAnimation;
  if ((__this_01 != (CocosAnimation_o *)0x0) &&
     (__this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._showChestRewardBtn;
    if (pSVar2 != (SFButton_o *)0x0) {
      __this_03 = (UnityEngine_Events_UnityEvent_o *)(pSVar2->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
        pSVar2 = (__this->fields)._showChestRewardBtn;
        if (pSVar2 != (SFButton_o *)0x0) {
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pSVar2,false,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__MLPCOKOBCLM(__this,method_00);
          Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__EELNMLDFJDN(__this,method_01);
          Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__OIHPDGOBHEM(__this,method_02);
          return;
        }
      }
    }
  }
LAB_03148814:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

