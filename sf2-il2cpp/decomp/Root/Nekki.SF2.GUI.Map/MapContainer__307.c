// TypeDefIndex 307
// Namespace: Nekki.SF2.GUI.Map
// public abstract class MapContainer : UIModule
// Fields:
//   private static float PHOGPJGGGMG; // 0x0
//   private static float DFFJDBKGGMC; // 0x4
//   protected MoveableMapPanel _moveableMapPanel; // 0x28
//   protected MapPanel _mapPanel; // 0x30
//   protected LampsPanel _lampsPanel; // 0x38
//   private Action<OOMHDDBCBJP> MNOIMJDFMMJ; // 0x40
//   private Action<ZoneScrollItem> BFICLHPKPAE; // 0x48
//   private Action ENMNHIMEELL; // 0x50
//   private Action PEMOCAODJBA; // 0x58

// ===== public void ToggleLampsPanelLocationName(bool CJNHFNHJHPE)  [RVA 0x3239918]
// Nekki.SF2.GUI.Map.MapContainer$$ToggleLampsPanelLocationName @ RVA 0x3239918

void Nekki_SF2_GUI_Map_MapContainer__ToggleLampsPanelLocationName
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  
  __this_00 = (__this->fields)._lampsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_LampsPanel__ToggleLocationName(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectBattle(OOMHDDBCBJP ODPEIFGHKNG, float GGMALJLKHHB)  [RVA 0x3239938]
// Nekki.SF2.GUI.Map.MapContainer$$SelectBattle @ RVA 0x3239938

void Nekki_SF2_GUI_Map_MapContainer__SelectBattle
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,OOMHDDBCBJP_o *ODPEIFGHKNG,
               float GGMALJLKHHB,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__SelectBattle(__this_00,ODPEIFGHKNG,GGMALJLKHHB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void SetZonesBackgroundMask(Color EFJKPCADGJH)  [RVA 0x3239954]
// Nekki.SF2.GUI.Map.MapContainer$$SetZonesBackgroundMask @ RVA 0x3239954

void Nekki_SF2_GUI_Map_MapContainer__SetZonesBackgroundMask
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_0456704a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    DAT_0456704a = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._mapPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
     (__this_01 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_58.fields._current ==
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) break;
      Nekki_SF2_GUI_Map_ZoneScrollItem__SetBackgroundColor
                ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_58.fields._current,EFJKPCADGJH,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CGHGGKBEHIF(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3239ADC]
// Nekki.SF2.GUI.Map.MapContainer$$CGHGGKBEHIF @ RVA 0x3239ADC

void Nekki_SF2_GUI_Map_MapContainer__CGHGGKBEHIF
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o *pSVar1;
  
  pSVar1 = (__this->fields).MNOIMJDFMMJ;
  if (pSVar1 != (System_Action_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03339af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,BANHBMINMMP,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnClosed(Action CJNHFNHJHPE)  [RVA 0x3239B00]
// Nekki.SF2.GUI.Map.MapContainer$$add_OnClosed @ RVA 0x3239B00

void Nekki_SF2_GUI_Map_MapContainer__add_OnClosed
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_0456704b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456704b = 1;
  }
  ppSVar4 = &(__this->fields).PEMOCAODJBA;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnBattleClicked(Action<OOMHDDBCBJP> CJNHFNHJHPE)  [RVA 0x3239B9C]
// Nekki.SF2.GUI.Map.MapContainer$$remove_OnBattleClicked @ RVA 0x3239B9C

void Nekki_SF2_GUI_Map_MapContainer__remove_OnBattleClicked
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OOMHDDBCBJP__o *pSVar5;
  System_Action_OOMHDDBCBJP__o **ppSVar6;
  System_Action_OOMHDDBCBJP__o *source;
  
  if ((DAT_0456704c & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    DAT_0456704c = 1;
  }
  ppSVar6 = &(__this->fields).MNOIMJDFMMJ;
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


// ===== public void remove_OnClosed(Action CJNHFNHJHPE)  [RVA 0x3239C4C]
// Nekki.SF2.GUI.Map.MapContainer$$remove_OnClosed @ RVA 0x3239C4C

void Nekki_SF2_GUI_Map_MapContainer__remove_OnClosed
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_0456704d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456704d = 1;
  }
  ppSVar4 = &(__this->fields).PEMOCAODJBA;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== protected void .ctor()  [RVA 0x3239CE8]
// Nekki.SF2.GUI.Map.MapContainer$$.ctor @ RVA 0x3239CE8

void Nekki_SF2_GUI_Map_MapContainer___ctor
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o **ppSVar1;
  System_Action_ZoneScrollItem__o **ppSVar2;
  System_Action_o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OOMHDDBCBJP__o *pSVar4;
  System_Action_ZoneScrollItem__o *pSVar5;
  System_Action_o *pSVar6;
  
  if ((DAT_0456704e & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_<>c_DAALCJJHJLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_<>c_IPALDJKFIIP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_<>c_KAKKJCBCMLN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_<>c_KENFMHBCMGD__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_0456704e = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar4 = Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_0;
  if (pSVar4 == (System_Action_OOMHDDBCBJP__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo,method);
    }
    pSVar4 = (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_0;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  if (__this != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    ppSVar1 = &(__this->fields).MNOIMJDFMMJ;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_1;
    if (pSVar5 == (System_Action_ZoneScrollItem__o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = (System_Action_ZoneScrollItem__o *)
               thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_1;
      *ppSVar2 = pSVar5;
      thunk_FUN_01c20e04(ppSVar2,pSVar5);
    }
    ppSVar2 = &(__this->fields).BFICLHPKPAE;
    *ppSVar2 = pSVar5;
    thunk_FUN_01c20e04(ppSVar2,pSVar5);
    if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_2;
    if (pSVar6 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar3 = &Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_2;
      *ppSVar3 = pSVar6;
      thunk_FUN_01c20e04(ppSVar3,pSVar6);
    }
    ppSVar3 = &(__this->fields).ENMNHIMEELL;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
    if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_3;
    if (pSVar6 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar3 = &Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_3;
      *ppSVar3 = pSVar6;
      thunk_FUN_01c20e04(ppSVar3,pSVar6);
    }
    ppSVar3 = &(__this->fields).PEMOCAODJBA;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddStoryZones()  [RVA 0x3239FD8]
// Nekki.SF2.GUI.Map.MapContainer$$AddStoryZones @ RVA 0x3239FD8

void Nekki_SF2_GUI_Map_MapContainer__AddStoryZones
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__AddStoryZones(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapContainer__BFFLMOMEKHE(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectBattleByDirection(Vector2 FAGFGDBOLDP)  [RVA 0x323A08C]
// Nekki.SF2.GUI.Map.MapContainer$$SelectBattleByDirection @ RVA 0x323A08C

void Nekki_SF2_GUI_Map_MapContainer__SelectBattleByDirection
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,UnityEngine_Vector2_o FAGFGDBOLDP,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__SelectBattleByDirection(__this_00,FAGFGDBOLDP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool ENIBALHEJFA(string KGLJICLJHEL, OOMHDDBCBJP BANHBMINMMP)  [RVA 0x323A0A8]
// Nekki.SF2.GUI.Map.MapContainer$$ENIBALHEJFA @ RVA 0x323A0A8

bool Nekki_SF2_GUI_Map_MapContainer__ENIBALHEJFA
               (System_String_o *KGLJICLJHEL,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    bVar1 = System_String__op_Equality
                      (KGLJICLJHEL,(BANHBMINMMP->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    iVar3 = (*(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                      (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.method);
    if (iVar3 == 2) {
      bVar2 = OOMHDDBCBJP__KFMAFEPOEIB(BANHBMINMMP,(MethodInfo *)0x0);
      bVar4 = ~bVar2 & 1;
    }
    else {
      bVar4 = 0;
    }
    return (bVar1 & bVar4) != 0;
  }
  return false;
}


// ===== public bool IsClosingNow()  [RVA 0x323A11C]
// Nekki.SF2.GUI.Map.MapContainer$$IsClosingNow @ RVA 0x323A11C

bool Nekki_SF2_GUI_Map_MapContainer__IsClosingNow
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._moveableMapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__IsClosing(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Clear()  [RVA 0x323A138]
// Nekki.SF2.GUI.Map.MapContainer$$Clear @ RVA 0x323A138

void Nekki_SF2_GUI_Map_MapContainer__Clear
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__Clear(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateName(string ABKAJJOOIHM)  [RVA 0x323A154]
// Nekki.SF2.GUI.Map.MapContainer$$UpdateName @ RVA 0x323A154

void Nekki_SF2_GUI_Map_MapContainer__UpdateName
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_String_o *ABKAJJOOIHM,
               MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,ABKAJJOOIHM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FKOGMFGABFL()  [RVA 0x323A17C]
// Nekki.SF2.GUI.Map.MapContainer$$FKOGMFGABFL @ RVA 0x323A17C

void Nekki_SF2_GUI_Map_MapContainer__FKOGMFGABFL
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Action_o *pSVar1;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this_00,true,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).ENMNHIMEELL;
    if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0333a1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetCurrentItemIndex()  [RVA 0x323A1B8]
// Nekki.SF2.GUI.Map.MapContainer$$GetCurrentItemIndex @ RVA 0x323A1B8

int32_t Nekki_SF2_GUI_Map_MapContainer__GetCurrentItemIndex
                  (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_Map_MapPanel__GetCurrentItemIndex(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnBattleClicked(Action<OOMHDDBCBJP> CJNHFNHJHPE)  [RVA 0x323A1D4]
// Nekki.SF2.GUI.Map.MapContainer$$add_OnBattleClicked @ RVA 0x323A1D4

void Nekki_SF2_GUI_Map_MapContainer__add_OnBattleClicked
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OOMHDDBCBJP__o *pSVar5;
  System_Action_OOMHDDBCBJP__o **ppSVar6;
  System_Action_OOMHDDBCBJP__o *a;
  
  if ((DAT_0456704f & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    DAT_0456704f = 1;
  }
  ppSVar6 = &(__this->fields).MNOIMJDFMMJ;
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


// ===== private void DCOKHIGFNFB()  [RVA 0x323A284]
// Nekki.SF2.GUI.Map.MapContainer$$DCOKHIGFNFB @ RVA 0x323A284

void Nekki_SF2_GUI_Map_MapContainer__DCOKHIGFNFB
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).PEMOCAODJBA;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    Nekki_SF2_GUI_Map_MapContainer__ShowUI(__this,false,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CloseRightNow()  [RVA 0x323A2E8]
// Nekki.SF2.GUI.Map.MapContainer$$CloseRightNow @ RVA 0x323A2E8

void Nekki_SF2_GUI_Map_MapContainer__CloseRightNow
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this_00,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._moveableMapPanel;
    if (__this_01 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MoveableMapPanel__CloseRightNow(__this_01,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(__this,false,method_00);
      Nekki_SF2_GUI_Map_MapContainer__ShowUI(__this,false,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToZone(int DPJIDNBJIBG, float PNEIGGOFIOA)  [RVA 0x323A364]
// Nekki.SF2.GUI.Map.MapContainer$$ScrollToZone @ RVA 0x323A364

void Nekki_SF2_GUI_Map_MapContainer__ScrollToZone
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t DPJIDNBJIBG,float PNEIGGOFIOA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__ScrollToZone(__this_00,DPJIDNBJIBG,PNEIGGOFIOA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnZoneSelected(Action<ZoneScrollItem> CJNHFNHJHPE)  [RVA 0x323A380]
// Nekki.SF2.GUI.Map.MapContainer$$add_OnZoneSelected @ RVA 0x323A380

void Nekki_SF2_GUI_Map_MapContainer__add_OnZoneSelected
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,
               System_Action_ZoneScrollItem__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_ZoneScrollItem__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ZoneScrollItem__o *pSVar5;
  System_Action_ZoneScrollItem__o **ppSVar6;
  System_Action_ZoneScrollItem__o *a;
  
  if ((DAT_04567050 & 1) == 0) {
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    DAT_04567050 = 1;
  }
  ppSVar6 = &(__this->fields).BFICLHPKPAE;
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


// ===== public bool HasBattle(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x323A430]
// Nekki.SF2.GUI.Map.MapContainer$$HasBattle @ RVA 0x323A430

bool Nekki_SF2_GUI_Map_MapContainer__HasBattle
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MapPanel__HasBattle(__this_00,BANHBMINMMP,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetZoneIndexByName(string AFKICLAFDKC)  [RVA 0x323A44C]
// Nekki.SF2.GUI.Map.MapContainer$$GetZoneIndexByName @ RVA 0x323A44C

int32_t Nekki_SF2_GUI_Map_MapContainer__GetZoneIndexByName
                  (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_String_o *AFKICLAFDKC,
                  MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_Map_MapPanel__GetZoneIndexByName(__this_00,AFKICLAFDKC,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Open()  [RVA 0x323A468]
// Nekki.SF2.GUI.Map.MapContainer$$Open @ RVA 0x323A468

bool Nekki_SF2_GUI_Map_MapContainer__Open
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_01;
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Map_MapContainer__ShowUI(__this,true,in_x2);
  __this_00 = (__this->fields)._moveableMapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__Open(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      __this_01 = (__this->fields)._mapPanel;
      if (__this_01 == (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) goto LAB_0333a4b8;
      Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this_01,false,(MethodInfo *)0x0);
    }
    return bVar1;
  }
LAB_0333a4b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Flashing()  [RVA 0x323A4BC]
// Nekki.SF2.GUI.Map.MapContainer$$Flashing @ RVA 0x323A4BC

void Nekki_SF2_GUI_Map_MapContainer__Flashing
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  
  __this_00 = (__this->fields)._lampsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_LampsPanel__Flashing(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Close()  [RVA 0x323A4D8]
// Nekki.SF2.GUI.Map.MapContainer$$Close @ RVA 0x323A4D8

bool Nekki_SF2_GUI_Map_MapContainer__Close
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_01;
  MethodInfo *in_x2;
  
  __this_00 = (__this->fields)._moveableMapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__Close(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_Map_MapContainer__ShowUI(__this,true,in_x2);
      __this_01 = (__this->fields)._mapPanel;
      if (__this_01 == (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) goto LAB_0333a52c;
      Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this_01,false,(MethodInfo *)0x0);
    }
    return bVar1;
  }
LAB_0333a52c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetZonesCount()  [RVA 0x323A530]
// Nekki.SF2.GUI.Map.MapContainer$$GetZonesCount @ RVA 0x323A530

int32_t Nekki_SF2_GUI_Map_MapContainer__GetZonesCount
                  (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *pSVar1;
  
  if ((DAT_04567051 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    DAT_04567051 = 1;
  }
  __this_00 = (__this->fields)._mapPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
     (pSVar1 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this_00,(MethodInfo *)0x0),
     pSVar1 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0)) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetZoneIndex(ZoneScrollItem BMKNIEJFMKD)  [RVA 0x323A584]
// Nekki.SF2.GUI.Map.MapContainer$$GetZoneIndex @ RVA 0x323A584

int32_t Nekki_SF2_GUI_Map_MapContainer__GetZoneIndex
                  (Nekki_SF2_GUI_Map_MapContainer_o *__this,
                  Nekki_SF2_GUI_Map_ZoneScrollItem_o *BMKNIEJFMKD,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_Map_MapPanel__GetZoneIndex(__this_00,BMKNIEJFMKD,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnOpened(Action CJNHFNHJHPE)  [RVA 0x323A5A0]
// Nekki.SF2.GUI.Map.MapContainer$$remove_OnOpened @ RVA 0x323A5A0

void Nekki_SF2_GUI_Map_MapContainer__remove_OnOpened
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04567052 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567052 = 1;
  }
  ppSVar4 = &(__this->fields).ENMNHIMEELL;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void UpdateLamps()  [RVA 0x323A63C]
// Nekki.SF2.GUI.Map.MapContainer$$UpdateLamps @ RVA 0x323A63C

void Nekki_SF2_GUI_Map_MapContainer__UpdateLamps
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *HLJMHAHBDBA;
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_01;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    HLJMHAHBDBA = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._lampsPanel;
    if (__this_01 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_LampsPanel__CheckOpenZones(__this_01,HLJMHAHBDBA,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x323A674]
// Nekki.SF2.GUI.Map.MapContainer$$CLNAOMIIBLH @ RVA 0x323A674

void Nekki_SF2_GUI_Map_MapContainer__CLNAOMIIBLH
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  System_Action_ZoneScrollItem__o *CJNHFNHJHPE_00;
  System_Action_int__o *CJNHFNHJHPE_01;
  System_Action_o *pSVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *pNVar2;
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *pNVar3;
  
  if ((DAT_04567053 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_BAIENFNFLAI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_CGHGGKBEHIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_CGKKIMGANJE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_DCOKHIGFNFB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_FKOGMFGABFL__);
    DAT_04567053 = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._mapPanel;
  CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar2 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__remove_OnClickBattle(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._mapPanel;
    CJNHFNHJHPE_00 =
         (System_Action_ZoneScrollItem__o *)
         thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MapPanel__remove_OnSelectZone(pNVar2,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._lampsPanel;
      CJNHFNHJHPE_01 = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
      System_Action<int>___ctor();
      if (__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
        Nekki_SF2_GUI_Map_LampsPanel__remove_OnClickLamp(__this_00,CJNHFNHJHPE_01,(MethodInfo *)0x0)
        ;
        pNVar3 = (__this->fields)._moveableMapPanel;
        pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar3 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
          Nekki_SF2_GUI_Map_MoveableMapPanel__remove_OnFinishedOpen(pNVar3,pSVar1,(MethodInfo *)0x0)
          ;
          pNVar3 = (__this->fields)._moveableMapPanel;
          pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar3 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
            Nekki_SF2_GUI_Map_MoveableMapPanel__remove_OnFinishedClose
                      (pNVar3,pSVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowUI(bool CJNHFNHJHPE)  [RVA 0x323A2B8]
// Nekki.SF2.GUI.Map.MapContainer$$ShowUI @ RVA 0x323A2B8

void Nekki_SF2_GUI_Map_MapContainer__ShowUI
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._mapPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetTouchEnabled(bool DMCLFENLIHB)  [RVA 0x323A86C]
// Nekki.SF2.GUI.Map.MapContainer$$SetTouchEnabled @ RVA 0x323A86C

void Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool DMCLFENLIHB,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._mapPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0333a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._4_SetTouchEnabled.methodPtr)
              (pNVar1,(ulong)DMCLFENLIHB,(pNVar1->klass->vtable)._4_SetTouchEnabled.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsMovingNow()  [RVA 0x323A890]
// Nekki.SF2.GUI.Map.MapContainer$$IsMovingNow @ RVA 0x323A890

bool Nekki_SF2_GUI_Map_MapContainer__IsMovingNow
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._moveableMapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__IsMoving(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnZoneSelected(Action<ZoneScrollItem> CJNHFNHJHPE)  [RVA 0x323A8AC]
// Nekki.SF2.GUI.Map.MapContainer$$remove_OnZoneSelected @ RVA 0x323A8AC

void Nekki_SF2_GUI_Map_MapContainer__remove_OnZoneSelected
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,
               System_Action_ZoneScrollItem__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_ZoneScrollItem__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ZoneScrollItem__o *pSVar5;
  System_Action_ZoneScrollItem__o **ppSVar6;
  System_Action_ZoneScrollItem__o *source;
  
  if ((DAT_04567054 & 1) == 0) {
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    DAT_04567054 = 1;
  }
  ppSVar6 = &(__this->fields).BFICLHPKPAE;
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


// ===== private static void .cctor()  [RVA 0x323A95C]
// Nekki.SF2.GUI.Map.MapContainer$$.cctor @ RVA 0x323A95C

void Nekki_SF2_GUI_Map_MapContainer___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapContainer_StaticFields *pNVar1;
  
                    /* try { // try from 0333a968 to 0343aacb has its CatchHandler @ 0333a968
                       catch() { ... } // from try @ 0333a968 with catch @ 0333a968
                       catch() { ... } // from try @ 0333ac04 with catch @ 0333a968
                       catch() { ... } // from try @ 0333ac9c with catch @ 0333a968
                       catch() { ... } // from try @ 0333aca4 with catch @ 0333a968
                       catch() { ... } // from try @ 0333ad64 with catch @ 0333a968 */
  if ((DAT_04567055 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_TypeInfo);
    DAT_04567055 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Map_MapContainer_TypeInfo->static_fields;
  pNVar1->PHOGPJGGGMG = 20.0;
  pNVar1->DFFJDBKGGMC = 50.0;
  return;
}


// ===== public ZoneScrollItem GetZone(int DPJIDNBJIBG)  [RVA 0x323A9AC]
// Nekki.SF2.GUI.Map.MapContainer$$GetZone @ RVA 0x323A9AC

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapContainer__GetZone
          (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar1;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    pNVar1 = Nekki_SF2_GUI_Map_MapPanel__GetZone(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BFFLMOMEKHE()  [RVA 0x323A000]
// Nekki.SF2.GUI.Map.MapContainer$$BFFLMOMEKHE @ RVA 0x323A000

void Nekki_SF2_GUI_Map_MapContainer__BFFLMOMEKHE
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *HLJMHAHBDBA;
  Nekki_SF2_GUI_Map_LampsPanel_o *pNVar1;
  
  if ((DAT_04567056 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    DAT_04567056 = 1;
  }
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    HLJMHAHBDBA = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._lampsPanel;
    if (((pNVar1 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) &&
        (Nekki_SF2_GUI_Map_LampsPanel__ClearLamps(pNVar1,(MethodInfo *)0x0),
        HLJMHAHBDBA != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0)) &&
       (pNVar1 = (__this->fields)._lampsPanel, pNVar1 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0)) {
      Nekki_SF2_GUI_Map_LampsPanel__AddLamps(pNVar1,(HLJMHAHBDBA->fields)._size,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._lampsPanel;
      if (pNVar1 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
        Nekki_SF2_GUI_Map_LampsPanel__CheckOpenZones(pNVar1,HLJMHAHBDBA,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CGKKIMGANJE(ZoneScrollItem IKKAMAMLIKA)  [RVA 0x323A9C8]
// Nekki.SF2.GUI.Map.MapContainer$$CGKKIMGANJE @ RVA 0x323A9C8

void Nekki_SF2_GUI_Map_MapContainer__CGKKIMGANJE
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,
               Nekki_SF2_GUI_Map_ZoneScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_Action_ZoneScrollItem__o *pSVar1;
  
  pSVar1 = (__this->fields).BFICLHPKPAE;
  if (pSVar1 != (System_Action_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0333a9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,IKKAMAMLIKA,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MIGOMOPONBN(MEJIKMPNBNL BHHBEIACGPB, ZoneScrollItem GNPAECKAJDE)  [RVA 0x323A9EC]
// Nekki.SF2.GUI.Map.MapContainer$$MIGOMOPONBN @ RVA 0x323A9EC

/* WARNING: Removing unreachable block (ram,0x0333ac74) */

void Nekki_SF2_GUI_Map_MapContainer__MIGOMOPONBN
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,
               Nekki_SF2_GUI_Map_ZoneScrollItem_o *GNPAECKAJDE,MethodInfo *method)

{
  Il2CppObject *BANHBMINMMP;
  Il2CppObject *KGLJICLJHEL;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *method_00;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar2;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_01;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_00 = GNPAECKAJDE;
  if ((DAT_04567057 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_TypeInfo);
    DAT_04567057 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0333aacc to 0343aaf3 has its CatchHandler @ 0333ace0 */
  pMVar2 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if (((pMVar2 == (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) || (BHHBEIACGPB == (MEJIKMPNBNL_o *)0x0)) ||
     (__this_00 = (pMVar2->fields).IIDBLEBLLEM,
     __this_00 == (System_Collections_Generic_List_string__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = (BHHBEIACGPB->fields).BDCBJJGNPMC;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
                    /* try { // try from 0333ab28 to 0343ab4f has its CatchHandler @ 0333acdc */
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    KGLJICLJHEL = local_80.fields._current;
    if (!bVar1) break;
    if (__this_01 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0333ab58 to 0343ab63 has its CatchHandler @ 0333acb4 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
                    /* try { // try from 0333ab70 to 0343ab7f has its CatchHandler @ 0333acd4 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      BANHBMINMMP = local_a0.fields._current;
      if (!bVar1) {
                    /* try { // try from 0333abc4 to 0343abcf has its CatchHandler @ 0333acd8 */
        uVar3 = 2;
        goto LAB_0333abcc;
      }
                    /* try { // try from 0333ab84 to 0343ab8f has its CatchHandler @ 0333acb0 */
      if ((Nekki_SF2_GUI_Map_MapContainer_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0333ab90 to 0343ab9b has its CatchHandler @ 0333acc8 */
        thunk_FUN_01ba7564();
      }
      bVar1 = Nekki_SF2_GUI_Map_MapContainer__ENIBALHEJFA
                        ((System_String_o *)KGLJICLJHEL,(OOMHDDBCBJP_o *)BANHBMINMMP,
                         (MethodInfo *)method_00);
    } while (!bVar1);
                    /* try { // try from 0333aba4 to 0343abb3 has its CatchHandler @ 0333acb8 */
    if (GNPAECKAJDE == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0333abec to 0343abf7 has its CatchHandler @ 0333acd0 */
      FUN_01bab8c8();
    }
    method_00 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    Nekki_SF2_GUI_Map_ZoneScrollItem__SetLastBattle
              (GNPAECKAJDE,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
                    /* try { // try from 0333abb8 to 0343abc3 has its CatchHandler @ 0333acbc */
    uVar3 = 6;
LAB_0333abcc:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
                    /* try { // try from 0333abd8 to 0343abe7 has its CatchHandler @ 0333accc */
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return;
}


// ===== public bool IsOpeningNow()  [RVA 0x323AD00]
// Nekki.SF2.GUI.Map.MapContainer$$IsOpeningNow @ RVA 0x323AD00

bool Nekki_SF2_GUI_Map_MapContainer__IsOpeningNow
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_00;
  
                    /* catch() { ... } // from try @ 0333acf0 with catch @ 0333ad04 */
  __this_00 = (__this->fields)._moveableMapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__IsOpening(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetLampsAndNameEnabled(bool CMPKOOEKFKF)  [RVA 0x323A334]
// Nekki.SF2.GUI.Map.MapContainer$$SetLampsAndNameEnabled @ RVA 0x323A334

void Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._lampsPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CMPKOOEKFKF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnOpened(Action CJNHFNHJHPE)  [RVA 0x323AD1C]
// Nekki.SF2.GUI.Map.MapContainer$$add_OnOpened @ RVA 0x323AD1C

void Nekki_SF2_GUI_Map_MapContainer__add_OnOpened
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567058 & 1) == 0) {
                    /* try { // try from 0333ad3c to 0343ad63 has its CatchHandler @ 0333ad78 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567058 = 1;
  }
  ppSVar4 = &(__this->fields).ENMNHIMEELL;
  a = *ppSVar4;
                    /* try { // try from 0333ad64 to 0343ad6f has its CatchHandler @ 0333a968 */
                    /* try { // try from 0333ad70 to 0343ad77 has its CatchHandler @ 0333ad78 */
                    /* catch() { ... } // from try @ 0333ad3c with catch @ 0333ad78
                       catch() { ... } // from try @ 0333ad70 with catch @ 0333ad78 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void SetCurrentZone(int DPJIDNBJIBG, string DHMHOAAOHEK)  [RVA 0x323ADB8]
// Nekki.SF2.GUI.Map.MapContainer$$SetCurrentZone @ RVA 0x323ADB8

void Nekki_SF2_GUI_Map_MapContainer__SetCurrentZone
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t DPJIDNBJIBG,
               System_String_o *DHMHOAAOHEK,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  
  __this_00 = (__this->fields)._lampsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_LampsPanel__SetCurrentZone
              (__this_00,DPJIDNBJIBG,DHMHOAAOHEK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ZoneScrollItem GetCurrentZone()  [RVA 0x323ADD4]
// Nekki.SF2.GUI.Map.MapContainer$$GetCurrentZone @ RVA 0x323ADD4

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapContainer__GetCurrentZone
          (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar1;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    pNVar1 = Nekki_SF2_GUI_Map_MapPanel__GetCurrentZone(__this_00,(MethodInfo *)0x0);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetLampsVisible(bool CJNHFNHJHPE)  [RVA 0x323ADF0]
// Nekki.SF2.GUI.Map.MapContainer$$SetLampsVisible @ RVA 0x323ADF0

void Nekki_SF2_GUI_Map_MapContainer__SetLampsVisible
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  
  __this_00 = (__this->fields)._lampsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_LampsPanel__SetLampsVisible(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x323AE10]
// Nekki.SF2.GUI.Map.MapContainer$$GIENGNEGHPJ @ RVA 0x323AE10

void Nekki_SF2_GUI_Map_MapContainer__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *pNVar1;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  System_Action_ZoneScrollItem__o *CJNHFNHJHPE_00;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *pNVar2;
  System_Action_o *pSVar3;
  Nekki_SF2_GUI_Map_LampsPanel_o *pNVar4;
  System_Action_int__o *CJNHFNHJHPE_01;
  MethodInfo *method_00;
  
  if ((DAT_04567059 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_BAIENFNFLAI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_CGHGGKBEHIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_CGKKIMGANJE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_DCOKHIGFNFB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_FKOGMFGABFL__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_RaidMapContainer_TypeInfo);
    DAT_04567059 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._mapPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__Init
              (pNVar1,__this->klass ==
                      (Nekki_SF2_GUI_Map_MapContainer_c *)
                      Nekki_SF2_GUI_Map_RaidMapContainer_TypeInfo,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._mapPanel;
    CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                  thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MapPanel__add_OnClickBattle(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._mapPanel;
      CJNHFNHJHPE_00 =
           (System_Action_ZoneScrollItem__o *)
           thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
        Nekki_SF2_GUI_Map_MapPanel__add_OnSelectZone(pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._mapPanel;
        if ((pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
           (pNVar2 = (__this->fields)._moveableMapPanel,
           pNVar2 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0)) {
          Nekki_SF2_GUI_Map_MoveableMapPanel__Init
                    (pNVar2,pNVar1,(pNVar1->fields).ECEJKFAFODM,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._moveableMapPanel;
          pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar2 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
            Nekki_SF2_GUI_Map_MoveableMapPanel__add_OnFinishedOpen(pNVar2,pSVar3,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._moveableMapPanel;
            pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pNVar2 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
              Nekki_SF2_GUI_Map_MoveableMapPanel__add_OnFinishedClose
                        (pNVar2,pSVar3,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._lampsPanel;
              if (pNVar4 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
                Nekki_SF2_GUI_Map_LampsPanel__Init(pNVar4,(MethodInfo *)0x0);
                pNVar4 = (__this->fields)._lampsPanel;
                CJNHFNHJHPE_01 =
                     (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
                System_Action<int>___ctor();
                if (pNVar4 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
                  method_00 = (MethodInfo *)0x0;
                  Nekki_SF2_GUI_Map_LampsPanel__add_OnClickLamp
                            (pNVar4,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(__this,true,method_00);
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


// ===== public void OpenRightNow()  [RVA 0x323B074]
// Nekki.SF2.GUI.Map.MapContainer$$OpenRightNow @ RVA 0x323B074

void Nekki_SF2_GUI_Map_MapContainer__OpenRightNow
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_01;
  MethodInfo *in_x2;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Map_MapContainer__ShowUI(__this,true,in_x2);
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this_00,true,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._moveableMapPanel;
    if (__this_01 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MoveableMapPanel__OpenRightNow(__this_01,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(__this,true,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToNextZone(int NDAALADKFLK)  [RVA 0x323B0BC]
// Nekki.SF2.GUI.Map.MapContainer$$ScrollToNextZone @ RVA 0x323B0BC

void Nekki_SF2_GUI_Map_MapContainer__ScrollToNextZone
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t NDAALADKFLK,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._lampsPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__BAIENFNFLAI
              (__this,(pNVar1->fields).BJJNEHBCHKE + NDAALADKFLK,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BAIENFNFLAI(int DPJIDNBJIBG)  [RVA 0x323B0DC]
// Nekki.SF2.GUI.Map.MapContainer$$BAIENFNFLAI @ RVA 0x323B0DC

void Nekki_SF2_GUI_Map_MapContainer__BAIENFNFLAI
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Nekki_SF2_GUI_Map_MapPanel_o *pNVar4;
  System_Collections_Generic_List_ZoneScrollItem__o *pSVar5;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *GNPAECKAJDE;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Map_LampsPanel_o *pNVar6;
  MEJIKMPNBNL_o *BHHBEIACGPB;
  float fVar7;
  float fVar8;
  
  if ((DAT_0456705a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    DAT_0456705a = 1;
  }
  if ((Nekki_SF2_GUI_Map_MapContainer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar6 = (__this->fields)._lampsPanel;
  if (pNVar6 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    iVar2 = (pNVar6->fields).BJJNEHBCHKE;
    fVar8 = Nekki_SF2_GUI_Map_MapContainer_TypeInfo->static_fields->DFFJDBKGGMC;
    if (DAT_04561c43 == '\0') {
      FUN_01bab630(&System_Math_TypeInfo);
      DAT_04561c43 = '\x01';
    }
    iVar2 = iVar2 - DPJIDNBJIBG;
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    pNVar4 = (__this->fields)._mapPanel;
    fVar7 = Nekki_SF2_GUI_Map_MapContainer_TypeInfo->static_fields->PHOGPJGGGMG * (float)iVar1;
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    fVar7 = -35791396.0;
    if (fVar8 != INFINITY) {
      fVar7 = (float)(int)fVar8 / 60.0;
    }
    if ((pNVar4 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
       (pSVar5 = Nekki_SF2_GUI_Map_MapPanel__GetZones(pNVar4,(MethodInfo *)0x0),
       pSVar5 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0)) {
      if ((DPJIDNBJIBG < 0) || ((pSVar5->fields)._size <= DPJIDNBJIBG)) {
        return;
      }
      pNVar4 = (__this->fields)._mapPanel;
      if (pNVar4 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
        GNPAECKAJDE = Nekki_SF2_GUI_Map_MapPanel__GetZone(pNVar4,DPJIDNBJIBG,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._mapPanel;
        if ((pNVar4 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
           (Nekki_SF2_GUI_Map_MapPanel__ScrollToZone(pNVar4,DPJIDNBJIBG,fVar7,(MethodInfo *)0x0),
           GNPAECKAJDE != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0)) {
          BHHBEIACGPB = (GNPAECKAJDE->fields).IAJBEJGMIMM;
          if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
            if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar3 = Nekki_SF2_GUI_Map_MapScene__IsZoneOpen(BHHBEIACGPB,(MethodInfo *)0x0);
            if (bVar3) {
              if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar3 = Nekki_SF2_GUI_Map_MapScene__IsZoneHaveDontCompleteBattle
                                (BHHBEIACGPB,(MethodInfo *)0x0);
              if (bVar3) {
                Nekki_SF2_GUI_Map_MapContainer__MIGOMOPONBN
                          ((Nekki_SF2_GUI_Map_MapContainer_o *)0x1,BHHBEIACGPB,GNPAECKAJDE,in_x3);
              }
            }
          }
          EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HasZone(ZoneScrollItem BHHBEIACGPB)  [RVA 0x323B2D4]
// Nekki.SF2.GUI.Map.MapContainer$$HasZone @ RVA 0x323B2D4

bool Nekki_SF2_GUI_Map_MapContainer__HasZone
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,
               Nekki_SF2_GUI_Map_ZoneScrollItem_o *BHHBEIACGPB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MapPanel__HasZone(__this_00,BHHBEIACGPB,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

