// TypeDefIndex 2965
// Namespace: Nekki.SF2.GUI.Map
// public class MapPanel : MonoBehaviour
// Fields:
//   private Action<OOMHDDBCBJP> CGHGGKBEHIF; // 0x20
//   private Action<ZoneScrollItem> CGKKIMGANJE; // 0x28
//   private GameObject _baseScrollContentPrefab; // 0x30
//   private BaseScrollContent ECEJKFAFODM; // 0x38
//   private GameObject _scrollItemPrefab; // 0x40
//   private Scroll <IENOFGNDANH>k__BackingField; // 0x48
//   private bool <LGKLAOCDMGF>k__BackingField; // 0x50
//   private MEJIKMPNBNL <PEMNOEOCALC>k__BackingField; // 0x58

// ===== public void remove_OnClickBattle(Action<OOMHDDBCBJP> CJNHFNHJHPE)  [RVA 0x349DDC4]
// Nekki.SF2.GUI.Map.MapPanel$$remove_OnClickBattle @ RVA 0x349DDC4

void Nekki_SF2_GUI_Map_MapPanel__remove_OnClickBattle
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OOMHDDBCBJP__o *pSVar5;
  System_Action_OOMHDDBCBJP__o **ppSVar6;
  System_Action_OOMHDDBCBJP__o *source;
  
  if ((DAT_04568477 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    DAT_04568477 = 1;
  }
  ppSVar6 = &(__this->fields).CGHGGKBEHIF;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<OOMHDDBCBJP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OOMHDDBCBJP__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public int GetZoneIndexByName(string KGLJICLJHEL)  [RVA 0x349DE74]
// Nekki.SF2.GUI.Map.MapPanel$$GetZoneIndexByName @ RVA 0x349DE74

int32_t Nekki_SF2_GUI_Map_MapPanel__GetZoneIndexByName
                  (Nekki_SF2_GUI_Map_MapPanel_o *__this,System_String_o *KGLJICLJHEL,
                  MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)KGLJICLJHEL;
  if ((DAT_04568478 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    DAT_04568478 = 1;
    method_00 = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,method_00);
  if (__this_00 == (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
  iVar2 = 0;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__)
    ;
    if (!bVar1) break;
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_48.fields._current[0x14].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (KGLJICLJHEL,
                       (System_String_o *)((local_48.fields._current[0x14].klass)->_1).namespaze,
                       (MethodInfo *)0x0);
    if (bVar1) break;
    iVar2 = iVar2 + 1;
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
  if ((__this_00->fields)._size <= iVar2) {
    iVar2 = -1;
  }
  return iVar2;
}


// ===== public void SelectBattleByDirection(Vector2 FAGFGDBOLDP)  [RVA 0x349E25C]
// Nekki.SF2.GUI.Map.MapPanel$$SelectBattleByDirection @ RVA 0x349E25C

void Nekki_SF2_GUI_Map_MapPanel__SelectBattleByDirection
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,UnityEngine_Vector2_o FAGFGDBOLDP,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_01;
  
  if ((DAT_04568479 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo);
    DAT_04568479 = 1;
  }
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)
                Nekki_SF2_GUI_Shop_Scroll__GetCurrentItem(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      bVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_01);
      }
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if (__this_01 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattleByDirection
                (__this_01,FAGFGDBOLDP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BaseScrollContent GetMoveableContent()  [RVA 0x349E358]
// Nekki.SF2.GUI.Map.MapPanel$$GetMoveableContent @ RVA 0x349E358

Nekki_SF2_GUI_BaseScrollContent_o *
Nekki_SF2_GUI_Map_MapPanel__GetMoveableContent
          (Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).ECEJKFAFODM;
}


// ===== public void add_OnSelectZone(Action<ZoneScrollItem> CJNHFNHJHPE)  [RVA 0x349E360]
// Nekki.SF2.GUI.Map.MapPanel$$add_OnSelectZone @ RVA 0x349E360

void Nekki_SF2_GUI_Map_MapPanel__add_OnSelectZone
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,System_Action_ZoneScrollItem__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_ZoneScrollItem__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ZoneScrollItem__o *pSVar5;
  System_Action_ZoneScrollItem__o **ppSVar6;
  System_Action_ZoneScrollItem__o *a;
  
  if ((DAT_0456847a & 1) == 0) {
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    DAT_0456847a = 1;
  }
  ppSVar6 = &(__this->fields).CGKKIMGANJE;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<ZoneScrollItem>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<ZoneScrollItem>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_ZoneScrollItem__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void HEACGIOEONC(bool CJNHFNHJHPE)  [RVA 0x349E410]
// Nekki.SF2.GUI.Map.MapPanel$$HEACGIOEONC @ RVA 0x349E410

void Nekki_SF2_GUI_Map_MapPanel__HEACGIOEONC
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LGKLAOCDMGF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void IKFENPJLMIA(object IMMNELPBGIF)  [RVA 0x349E41C]
// Nekki.SF2.GUI.Map.MapPanel$$IKFENPJLMIA @ RVA 0x349E41C

void Nekki_SF2_GUI_Map_MapPanel__IKFENPJLMIA
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  System_Action_ZoneScrollItem__o *pSVar2;
  
  if ((DAT_0456847b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo);
    DAT_0456847b = 1;
  }
  pSVar2 = (__this->fields).CGKKIMGANJE;
  if (pSVar2 == (System_Action_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) {
      if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo) {
        IMMNELPBGIF = (Il2CppObject *)0x0;
      }
      goto LAB_0359e494;
    }
  }
  IMMNELPBGIF = (Il2CppObject *)0x0;
LAB_0359e494:
                    /* WARNING: Could not recover jumptable at 0x0359e4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(pSVar2->fields).super.super.invoke_impl)
            ((pSVar2->fields).super.super.method_code,IMMNELPBGIF,
             (pSVar2->fields).super.super.method);
  return;
}


// ===== private void OnDestroy()  [RVA 0x349E4B0]
// Nekki.SF2.GUI.Map.MapPanel$$OnDestroy @ RVA 0x349E4B0

void Nekki_SF2_GUI_Map_MapPanel__OnDestroy(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o **ppNVar3;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o **ppNVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar5;
  
  if ((DAT_0456847c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456847c = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._IENOFGNDANH_k__BackingField;
    if (pNVar5 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) goto LAB_0359e550;
    (*(pNVar5->klass->vtable)._4_DestroyItems.methodPtr)
              (pNVar5,(pNVar5->klass->vtable)._4_DestroyItems.method);
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
    ppNVar3 = &(pNVar2->fields).onClickItem;
    *ppNVar3 = (Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      ppNVar4 = &(pNVar2->fields).onSelectItem;
      *ppNVar4 = (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *)0x0;
      thunk_FUN_01c20e04(ppNVar4,0);
      return;
    }
  }
LAB_0359e550:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CHEFJHEPHNL(Scroll CJNHFNHJHPE)  [RVA 0x349E554]
// Nekki.SF2.GUI.Map.MapPanel$$CHEFJHEPHNL @ RVA 0x349E554

void Nekki_SF2_GUI_Map_MapPanel__CHEFJHEPHNL
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,Nekki_SF2_GUI_Shop_Scroll_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._IENOFGNDANH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void ScrollToZone(int DPJIDNBJIBG, float PNEIGGOFIOA)  [RVA 0x349E55C]
// Nekki.SF2.GUI.Map.MapPanel$$ScrollToZone @ RVA 0x349E55C

void Nekki_SF2_GUI_Map_MapPanel__ScrollToZone
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,int32_t DPJIDNBJIBG,float PNEIGGOFIOA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    Nekki_SF2_GUI_Shop_Scroll__ScrollToItem(__this_00,DPJIDNBJIBG,PNEIGGOFIOA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ZoneScrollItem GetCurrentZone()  [RVA 0x349E578]
// Nekki.SF2.GUI.Map.MapPanel$$GetCurrentZone @ RVA 0x349E578

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapPanel__GetCurrentZone(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456847d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo);
    DAT_0456847d = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (__this_00 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pNVar2 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)
           Nekki_SF2_GUI_Shop_Scroll__GetCurrentItem(__this_00,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo->_2).naturalAligment;
    if ((pNVar2->klass->_2).naturalAligment < bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    }
    else if ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo) {
      pNVar2 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    }
  }
  return pNVar2;
}


// ===== public void AddStoryZones()  [RVA 0x349E604]
// Nekki.SF2.GUI.Map.MapPanel$$AddStoryZones @ RVA 0x349E604

void Nekki_SF2_GUI_Map_MapPanel__AddStoryZones
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456847e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8832/*"MapPanel::AddZones: adding to storyZones to raid MapPanel"*/);
    DAT_0456847e = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._LGKLAOCDMGF_k__BackingField != false) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_8832/*"MapPanel::AddZones: adding to storyZones to raid MapPanel"*/,(MethodInfo *)0x0);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__BLNDKLMBIPN((MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Map_MapPanel__HPKGLFMFKPI
                (__this,(MEJIKMPNBNL_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectBattle(OOMHDDBCBJP BANHBMINMMP, float PNEIGGOFIOA)  [RVA 0x349EA80]
// Nekki.SF2.GUI.Map.MapPanel$$SelectBattle @ RVA 0x349EA80

void Nekki_SF2_GUI_Map_MapPanel__SelectBattle
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,float PNEIGGOFIOA,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_01;
  Nekki_SF2_GUI_Map_BattleButton_o *exists;
  OOMHDDBCBJP_o *pOVar2;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar3;
  Nekki_SF2_GUI_BaseScrollItem_o *x;
  OOMHDDBCBJP_o *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  pOVar2 = BANHBMINMMP;
  if ((DAT_0456847f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456847f = 1;
    pOVar2 = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    __this_01 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,(MethodInfo *)pOVar2);
    if (__this_01 == (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__
                        );
      __this_00 = local_70.fields._current;
      if (!bVar1) goto LAB_0359ec04;
      if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_70.fields._current ==
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      exists = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle
                         ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_70.fields._current,BANHBMINMMP
                          ,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
    } while (!bVar1);
    pOVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__ChooseClosestBattle
                       ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)__this_00,BANHBMINMMP,
                        (MethodInfo *)0x0);
    ((Nekki_SF2_GUI_Map_ZoneScrollItem_Fields *)((long)__this_00 + 0x10))->KOGBPIPIKFA = pOVar2;
    thunk_FUN_01c20e04(&((Nekki_SF2_GUI_Map_ZoneScrollItem_Fields *)((long)__this_00 + 0x10))->
                        KOGBPIPIKFA);
    pNVar3 = (__this->fields)._IENOFGNDANH_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    x = Nekki_SF2_GUI_Shop_Scroll__GetCurrentItem(pNVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0
                      );
    if (bVar1) {
      pNVar3 = (__this->fields)._IENOFGNDANH_k__BackingField;
      if (pNVar3 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Shop_Scroll__ScrollToItem
                (pNVar3,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,PNEIGGOFIOA,(MethodInfo *)0x0);
    }
LAB_0359ec04:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__
              );
  }
  return;
}


// ===== public bool HasZone(ZoneScrollItem BHHBEIACGPB)  [RVA 0x349ECC8]
// Nekki.SF2.GUI.Map.MapPanel$$HasZone @ RVA 0x349ECC8

bool Nekki_SF2_GUI_Map_MapPanel__HasZone
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,Nekki_SF2_GUI_Map_ZoneScrollItem_o *BHHBEIACGPB
               ,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *extraout_x1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *method_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  method_00 = BHHBEIACGPB;
  if ((DAT_04568480 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568480 = 1;
    method_00 = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,(MethodInfo *)method_00);
  if (__this_00 == (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__)
    ;
    x = local_58.fields._current;
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_0359edbc;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)BHHBEIACGPB,
                       (MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_0359edbc:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public void Init(bool BDACJNPGHKF)  [RVA 0x349EE64]
// Nekki.SF2.GUI.Map.MapPanel$$Init @ RVA 0x349EE64

void Nekki_SF2_GUI_Map_MapPanel__Init
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,bool BDACJNPGHKF,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar2;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  UnityEngine_Object_o *x;
  ulong uVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar5;
  Nekki_SF2_GUI_Shop_Scroll_o **ppNVar6;
  UnityEngine_GameObject_o *pUVar7;
  
  if ((DAT_04568481 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Graphic>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Scroll>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BaseScrollContent>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8833/*"MapPanel::Init: disable raycast target, causes scrolling error"*/);
    DAT_04568481 = 1;
  }
  (__this->fields)._LGKLAOCDMGF_k__BackingField = BDACJNPGHKF;
  pNVar2 = (Nekki_SF2_GUI_Shop_Scroll_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<Scroll>__);
  ppNVar6 = &(__this->fields)._IENOFGNDANH_k__BackingField;
  *ppNVar6 = pNVar2;
  thunk_FUN_01c20e04(ppNVar6,pNVar2);
  if ((*ppNVar6 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) &&
     (pNVar5 = ((*ppNVar6)->fields)._itemsScroll, pNVar5 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0)) {
    (pNVar5->fields).MoveOnlyScrollingOrth = true;
    Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this,false,method);
    pUVar7 = (__this->fields)._baseScrollContentPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar7 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar7,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_BaseScrollContent_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar7,Method_UnityEngine_GameObject_GetComponent<BaseScrollContent>__);
      (__this->fields).ECEJKFAFODM = pNVar3;
      thunk_FUN_01c20e04();
      Nekki_SF2_GUI_Map_MapPanel__FELAHGOCMMN(__this,method_00);
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__GetComponent<object>
                    ((UnityEngine_Component_o *)__this,
                     Method_UnityEngine_Component_GetComponent<Graphic>__);
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) goto LAB_0359f034;
        uVar4 = (*(code *)x->klass[1].vtable._0_Equals.method)
                          (x,x->klass[1].vtable._1_Finalize.methodPtr);
        if ((uVar4 & 1) != 0) {
          (*(code *)x->klass[1].vtable._1_Finalize.method)
                    (x,0,x->klass[1].vtable._2_GetHashCode.methodPtr);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_8833/*"MapPanel::Init: disable raycast target, causes scrolling error"*/,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
LAB_0359f034:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MNOIMJDFMMJ(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x349F1BC]
// Nekki.SF2.GUI.Map.MapPanel$$MNOIMJDFMMJ @ RVA 0x349F1BC

void Nekki_SF2_GUI_Map_MapPanel__MNOIMJDFMMJ
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o *pSVar1;
  
  pSVar1 = (__this->fields).CGHGGKBEHIF;
  if (pSVar1 != (System_Action_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0359f1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,BANHBMINMMP,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetZoneIndex(ZoneScrollItem ELDONAKMDAE)  [RVA 0x349F1E0]
// Nekki.SF2.GUI.Map.MapPanel$$GetZoneIndex @ RVA 0x349F1E0

int32_t Nekki_SF2_GUI_Map_MapPanel__GetZoneIndex
                  (Nekki_SF2_GUI_Map_MapPanel_o *__this,
                  Nekki_SF2_GUI_Map_ZoneScrollItem_o *ELDONAKMDAE,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *extraout_x1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *method_00;
  
  method_00 = ELDONAKMDAE;
  if ((DAT_04568482 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_IndexOf__);
    DAT_04568482 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,(MethodInfo *)method_00);
  if (__this_00 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
    iVar1 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)ELDONAKMDAE,
                       Method_System_Collections_Generic_List<ZoneScrollItem>_IndexOf__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnClickBattle(Action<OOMHDDBCBJP> CJNHFNHJHPE)  [RVA 0x349F23C]
// Nekki.SF2.GUI.Map.MapPanel$$add_OnClickBattle @ RVA 0x349F23C

void Nekki_SF2_GUI_Map_MapPanel__add_OnClickBattle
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OOMHDDBCBJP__o *pSVar5;
  System_Action_OOMHDDBCBJP__o **ppSVar6;
  System_Action_OOMHDDBCBJP__o *a;
  
  if ((DAT_04568483 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    DAT_04568483 = 1;
  }
  ppSVar6 = &(__this->fields).CGHGGKBEHIF;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<OOMHDDBCBJP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OOMHDDBCBJP__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void Clear()  [RVA 0x349F2EC]
// Nekki.SF2.GUI.Map.MapPanel$$Clear @ RVA 0x349F2EC

void Nekki_SF2_GUI_Map_MapPanel__Clear(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar1;
  MEJIKMPNBNL_o **ppMVar2;
  
  pNVar1 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    (*(pNVar1->klass->vtable)._4_DestroyItems.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._4_DestroyItems.method);
    ppMVar2 = &(__this->fields)._PEMNOEOCALC_k__BackingField;
    *ppMVar2 = (MEJIKMPNBNL_o *)0x0;
    thunk_FUN_01c20e04(ppMVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ZoneScrollItem> GetZones()  [RVA 0x349E010]
// Nekki.SF2.GUI.Map.MapPanel$$GetZones @ RVA 0x349E010

System_Collections_Generic_List_ZoneScrollItem__o *
Nekki_SF2_GUI_Map_MapPanel__GetZones(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_01;
  System_Collections_Generic_List_BaseScrollItem__o *__this_02;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *item;
  Nekki_SF2_GUI_Map_ZoneScrollItem_array *pNVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568484 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo);
    DAT_04568484 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_ZoneScrollItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ZoneScrollItem>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ZoneScrollItem>__ctor__);
  __this_01 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if ((__this_01 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) ||
     (__this_02 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this_01,(MethodInfo *)0x0),
     __this_02 == (System_Collections_Generic_List_BaseScrollItem__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
  do {
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__)
    ;
    lVar3 = Method_System_Collections_Generic_List<ZoneScrollItem>_Add__;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,
                 Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
      return __this_00;
    }
    if (__this_00 == (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_48.fields._current ==
        (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
LAB_0359e140:
      item = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    }
    else {
      bVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo->_2).naturalAligment;
      if ((((Nekki_SF2_GUI_Map_ZoneScrollItem_c *)(local_48.fields._current)->klass)->_2).
          naturalAligment < bVar1) goto LAB_0359e140;
      item = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_48.fields._current;
      if ((((Nekki_SF2_GUI_Map_ZoneScrollItem_c *)(local_48.fields._current)->klass)->_2).
          typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo) {
        item = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
      }
    }
    pNVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar5 == (Nekki_SF2_GUI_Map_ZoneScrollItem_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pNVar5->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pNVar5->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}


// ===== public int GetCurrentItemIndex()  [RVA 0x349F320]
// Nekki.SF2.GUI.Map.MapPanel$$GetCurrentItemIndex @ RVA 0x349F320

int32_t Nekki_SF2_GUI_Map_MapPanel__GetCurrentItemIndex
                  (Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_Shop_Scroll__GetCurrentItemIndex(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HasBattle(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x349F33C]
// Nekki.SF2.GUI.Map.MapPanel$$HasBattle @ RVA 0x349F33C

bool Nekki_SF2_GUI_Map_MapPanel__HasBattle
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *exists;
  OOMHDDBCBJP_o *extraout_x1;
  OOMHDDBCBJP_o *method_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  method_00 = BANHBMINMMP;
  if ((DAT_04568485 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568485 = 1;
    method_00 = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,(MethodInfo *)method_00);
  if (__this_00 == (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__)
    ;
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_0359f440;
    }
    if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_58.fields._current ==
        (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    exists = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle
                       ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_58.fields._current,BANHBMINMMP,
                        (MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_0359f440:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public void EnableScrolling(bool CJNHFNHJHPE)  [RVA 0x349F038]
// Nekki.SF2.GUI.Map.MapPanel$$EnableScrolling @ RVA 0x349F038

void Nekki_SF2_GUI_Map_MapPanel__EnableScrolling
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar3;
  
  pNVar3 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    pNVar2 = (pNVar3->fields)._itemsScroll;
    if (CJNHFNHJHPE) {
      bVar1 = (__this->fields)._LGKLAOCDMGF_k__BackingField == false;
    }
    else {
      bVar1 = false;
    }
    if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
      Nekki_SF2_GUI_ItemsScroll__set_EnableDragging(pNVar2,bVar1,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._IENOFGNDANH_k__BackingField;
      if (pNVar3 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
        pNVar2 = (pNVar3->fields)._itemsScroll;
        if (CJNHFNHJHPE) {
          bVar1 = (__this->fields)._LGKLAOCDMGF_k__BackingField == false;
        }
        else {
          bVar1 = false;
        }
        if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
          (pNVar2->fields).super.m_Horizontal = bVar1;
          (pNVar2->fields).super.m_Vertical = false;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x349F4F0]
// Nekki.SF2.GUI.Map.MapPanel$$.ctor @ RVA 0x349F4F0

void Nekki_SF2_GUI_Map_MapPanel___ctor(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o **ppSVar1;
  System_Action_ZoneScrollItem__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OOMHDDBCBJP__o *pSVar3;
  System_Action_ZoneScrollItem__o *pSVar4;
  
  if ((DAT_04568486 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapPanel_<>c_FMDFGIKBIID__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapPanel_<>c_JCMPPGGHDAC__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo);
    DAT_04568486 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->static_fields->__9__44_0;
  if (pSVar3 == (System_Action_OOMHDDBCBJP__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->static_fields->__9__44_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    ppSVar1 = &(__this->fields).CGHGGKBEHIF;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->static_fields->__9__44_1;
    if (pSVar4 == (System_Action_ZoneScrollItem__o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_ZoneScrollItem__o *)
               thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->static_fields->__9__44_1;
      *ppSVar2 = pSVar4;
      thunk_FUN_01c20e04(ppSVar2,pSVar4);
    }
    ppSVar2 = &(__this->fields).CGKKIMGANJE;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnSelectZone(Action<ZoneScrollItem> CJNHFNHJHPE)  [RVA 0x349F688]
// Nekki.SF2.GUI.Map.MapPanel$$remove_OnSelectZone @ RVA 0x349F688

void Nekki_SF2_GUI_Map_MapPanel__remove_OnSelectZone
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,System_Action_ZoneScrollItem__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_ZoneScrollItem__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ZoneScrollItem__o *pSVar5;
  System_Action_ZoneScrollItem__o **ppSVar6;
  System_Action_ZoneScrollItem__o *source;
  
  if ((DAT_04568487 & 1) == 0) {
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    DAT_04568487 = 1;
  }
  ppSVar6 = &(__this->fields).CGKKIMGANJE;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<ZoneScrollItem>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<ZoneScrollItem>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_ZoneScrollItem__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void HJGCJHMNCAD(MEJIKMPNBNL CJNHFNHJHPE)  [RVA 0x349F738]
// Nekki.SF2.GUI.Map.MapPanel$$HJGCJHMNCAD @ RVA 0x349F738

void Nekki_SF2_GUI_Map_MapPanel__HJGCJHMNCAD
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MEJIKMPNBNL_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PEMNOEOCALC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void FELAHGOCMMN()  [RVA 0x349F0B8]
// Nekki.SF2.GUI.Map.MapPanel$$FELAHGOCMMN @ RVA 0x349F0B8

void Nekki_SF2_GUI_Map_MapPanel__FELAHGOCMMN
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar3;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this_00;
  
  if ((DAT_04568488 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapPanel_IKFENPJLMIA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
    DAT_04568488 = 1;
  }
  pNVar1 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    Nekki_SF2_GUI_Shop_Scroll__Init(pNVar1,(__this->fields).ECEJKFAFODM,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._IENOFGNDANH_k__BackingField;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pNVar1,
                 (__this->fields)._LGKLAOCDMGF_k__BackingField == false,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).ECEJKFAFODM;
      if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
        __this_00 = (pNVar2->fields).onSelectItem;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_00 != (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                     Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
          pNVar1 = (__this->fields)._IENOFGNDANH_k__BackingField;
          if ((pNVar1 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) &&
             (pNVar3 = (pNVar1->fields)._itemsScroll, pNVar3 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0))
          {
            (pNVar3->fields)._MinScrollVelocity = 500.0;
            (pNVar3->fields)._AutoscrollDuration = 0.25;
            pNVar2 = (pNVar1->fields).ECEJKFAFODM;
            if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
              (pNVar2->fields).Spacing = 0.0;
              Nekki_SF2_GUI_Shop_Scroll__ScrollToBegin(pNVar1,(MethodInfo *)0x0);
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


// ===== private void HPKGLFMFKPI(MEJIKMPNBNL BHHBEIACGPB)  [RVA 0x349E7A8]
// Nekki.SF2.GUI.Map.MapPanel$$HPKGLFMFKPI @ RVA 0x349E7A8

void Nekki_SF2_GUI_Map_MapPanel__HPKGLFMFKPI
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_01;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  byte bVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568489 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ZoneScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapPanel_MNOIMJDFMMJ__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12044/*"ShopScrollContent.SetItems scrollItem is null"*/);
    DAT_04568489 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
    if ((BHHBEIACGPB->fields).OHOEDCBKNGO != false) {
      return;
    }
    __this_00 = (BHHBEIACGPB->fields).BDCBJJGNPMC;
    if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      bVar4 = 1;
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), bVar1) {
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = bVar4 & (*(byte *)&local_50.fields._current[0xb].klass ^ 0xff);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
      if (bVar4 != 0) {
        return;
      }
      pUVar3 = (__this->fields)._scrollItemPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar3 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar3,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar3,Method_UnityEngine_GameObject_GetComponent<ZoneScrollItem>__);
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          if (__this_01 == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_0359ea04;
          Nekki_SF2_GUI_Map_ZoneScrollItem__Init(__this_01,BHHBEIACGPB,(MethodInfo *)0x0);
          CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                        thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
          System_Action<object>___ctor();
          Nekki_SF2_GUI_Map_ZoneScrollItem__add_OnClickBattle
                    (__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle(__this_01,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._IENOFGNDANH_k__BackingField;
          if (pNVar2 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) goto LAB_0359ea04;
          Nekki_SF2_GUI_Shop_Scroll__AddItem
                    (pNVar2,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_01,(MethodInfo *)0x0);
        }
        else {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_12044/*"ShopScrollContent.SetItems scrollItem is null"*/,(MethodInfo *)0x0);
        }
        pNVar2 = (__this->fields)._IENOFGNDANH_k__BackingField;
        if (pNVar2 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
          Nekki_SF2_GUI_Shop_Scroll__ScrollToBegin(pNVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0359ea04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void SetTouchEnabled(bool CJNHFNHJHPE)  [RVA 0x349F740]
// Nekki.SF2.GUI.Map.MapPanel$$SetTouchEnabled @ RVA 0x349F740

void Nekki_SF2_GUI_Map_MapPanel__SetTouchEnabled
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456848a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    DAT_0456848a = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (CJNHFNHJHPE) {
    bVar1 = (__this->fields)._LGKLAOCDMGF_k__BackingField == false;
  }
  else {
    bVar1 = false;
  }
  if (__this_00 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,bVar1,(MethodInfo *)0x0)
    ;
    __this_01 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,method_00);
    if (__this_01 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
          return;
        }
        if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_38.fields._current ==
            (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) break;
        Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled
                  ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_38.fields._current,CJNHFNHJHPE,
                   (MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ZoneScrollItem GetZone(int DPJIDNBJIBG)  [RVA 0x349F8C0]
// Nekki.SF2.GUI.Map.MapPanel$$GetZone @ RVA 0x349F8C0

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapPanel__GetZone
          (Nekki_SF2_GUI_Map_MapPanel_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  if ((DAT_0456848b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Item__);
    DAT_0456848b = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,method_00);
  if ((__this_00 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) &&
     (DPJIDNBJIBG < (__this_00->fields)._size)) {
    pNVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                        Method_System_Collections_Generic_List<ZoneScrollItem>_get_Item__);
    return pNVar1;
  }
  return (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
}


// ===== public bool get_IsRaidMap()  [RVA 0x349F940]
// Nekki.SF2.GUI.Map.MapPanel$$get_IsRaidMap @ RVA 0x349F940

bool Nekki_SF2_GUI_Map_MapPanel__get_IsRaidMap
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._LGKLAOCDMGF_k__BackingField;
}


// ===== public void AddRaidZone(MEJIKMPNBNL BHHBEIACGPB)  [RVA 0x349F948]
// Nekki.SF2.GUI.Map.MapPanel$$AddRaidZone @ RVA 0x349F948

void Nekki_SF2_GUI_Map_MapPanel__AddRaidZone
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  System_String_o *message;
  MEJIKMPNBNL_o *pMVar1;
  MEJIKMPNBNL_o **ppMVar2;
  
  if ((DAT_0456848c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_8831/*"MapPanel::AddRaidZone: adding to raidZone to story MapPanel"*/);
    FUN_01bab630(&StringLiteral_254/*" 2nd: "*/);
    FUN_01bab630(&StringLiteral_8830/*"MapPanel::AddRaidZone: adding the second RaidZone, 1st: "*/);
    DAT_0456848c = 1;
  }
  if ((__this->fields)._LGKLAOCDMGF_k__BackingField == false) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8831/*"MapPanel::AddRaidZone: adding to raidZone to story MapPanel"*/,(MethodInfo *)0x0);
  }
  ppMVar2 = &(__this->fields)._PEMNOEOCALC_k__BackingField;
  pMVar1 = *ppMVar2;
  if (pMVar1 != (MEJIKMPNBNL_o *)0x0) {
    if (BHHBEIACGPB == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method = StringLiteral_254/*" 2nd: "*/;
    message = System_String__Concat
                        (StringLiteral_8830/*"MapPanel::AddRaidZone: adding the second RaidZone, 1st: "*/,(pMVar1->fields).DEKCPPOJFEH,
                         (System_String_o *)StringLiteral_254/*" 2nd: "*/,(BHHBEIACGPB->fields).DEKCPPOJFEH,
                         (MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  }
  (__this->fields)._PEMNOEOCALC_k__BackingField = BHHBEIACGPB;
  thunk_FUN_01c20e04(ppMVar2,BHHBEIACGPB);
  Nekki_SF2_GUI_Map_MapPanel__HPKGLFMFKPI(__this,BHHBEIACGPB,method);
  return;
}


// ===== public MEJIKMPNBNL get_RaidZone()  [RVA 0x349FA5C]
// Nekki.SF2.GUI.Map.MapPanel$$get_RaidZone @ RVA 0x349FA5C

MEJIKMPNBNL_o *
Nekki_SF2_GUI_Map_MapPanel__get_RaidZone(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._PEMNOEOCALC_k__BackingField;
}


// ===== public Scroll get_MapScroll()  [RVA 0x349FA64]
// Nekki.SF2.GUI.Map.MapPanel$$get_MapScroll @ RVA 0x349FA64

Nekki_SF2_GUI_Shop_Scroll_o *
Nekki_SF2_GUI_Map_MapPanel__get_MapScroll(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._IENOFGNDANH_k__BackingField;
}

