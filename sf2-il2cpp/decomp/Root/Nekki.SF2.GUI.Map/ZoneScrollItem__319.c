// TypeDefIndex 319
// Namespace: Nekki.SF2.GUI.Map
// public class ZoneScrollItem : BaseScrollItem, IComparable<ZoneScrollItem>
// Fields:
//   private const float DKMGHMLKLKD = 50;
//   private Action<OOMHDDBCBJP> CGHGGKBEHIF; // 0x130
//   private List<BattleButton> PGCBEJGMIMA; // 0x138
//   private MEJIKMPNBNL IAJBEJGMIMM; // 0x140
//   private OOMHDDBCBJP KOGBPIPIKFA; // 0x148
//   private Color ILHMFFCAIFD; // 0x150
//   public GameObject BattleBtnPrefab; // 0x160

// ===== private void LKLHLGLCEOM()  [RVA 0x334705C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$LKLHLGLCEOM @ RVA 0x334705C

void Nekki_SF2_GUI_Map_ZoneScrollItem__LKLHLGLCEOM
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045679ca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    DAT_045679ca = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Map_ZoneScrollItem__GPAECDJPJPF
                (__this,(Nekki_SF2_GUI_Map_BattleButton_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void HEHGKGEGBBD()  [RVA 0x3347218]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$HEHGKGEGBBD @ RVA 0x3347218

void Nekki_SF2_GUI_Map_ZoneScrollItem__HEHGKGEGBBD
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  MEJIKMPNBNL_o *pMVar2;
  
  if ((DAT_045679cb & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&StringLiteral_14115/*"UI/zones/"*/);
    DAT_045679cb = 1;
  }
  __this_00 = (Nekki_SF2_GUI_ResolutionImage_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14115/*"UI/zones/"*/._4_4_;
    (__this_00->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14115/*"UI/zones/"*/;
    (__this_00->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(__this_00->fields).super.m_PixelsPerUnitMultiplier);
    pMVar2 = (__this->fields).IAJBEJGMIMM;
    if (pMVar2 != (MEJIKMPNBNL_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,(pMVar2->fields).DINIOKEPIIP,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x034472c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                ((__this->fields).ILHMFFCAIFD.fields.r,(__this->fields).ILHMFFCAIFD.fields.g,
                 (__this->fields).ILHMFFCAIFD.fields.b,(__this->fields).ILHMFFCAIFD.fields.a,
                 __this_00,(__this_00->klass->vtable)._23_set_color.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private BattleButton JJBHJFAOOBN(RaycastHit2D MJIIBFNDCGL, OOMHDDBCBJP BMCECOIGLNL)  [RVA 0x33472CC]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$JJBHJFAOOBN @ RVA 0x33472CC

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__JJBHJFAOOBN
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,UnityEngine_RaycastHit2D_o *MJIIBFNDCGL,
          OOMHDDBCBJP_o *BMCECOIGLNL,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar3;
  OOMHDDBCBJP_o *pOVar4;
  
  if ((DAT_045679cc & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<BattleButton>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679cc = 1;
  }
  pUVar2 = UnityEngine_RaycastHit2D__get_transform(MJIIBFNDCGL,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
  }
  else {
    pUVar2 = UnityEngine_RaycastHit2D__get_transform(MJIIBFNDCGL,(MethodInfo *)0x0);
    if ((((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pNVar3 = (Nekki_SF2_GUI_Map_BattleButton_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar2,
                              Method_UnityEngine_Component_GetComponent<BattleButton>__),
         pNVar3 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0)) ||
        (pOVar4 = (pNVar3->fields).CLMFOMEABFA, pOVar4 == (OOMHDDBCBJP_o *)0x0)) ||
       (BMCECOIGLNL == (OOMHDDBCBJP_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pOVar4->fields).IAJPHAAMKPC != (BMCECOIGLNL->fields).IAJPHAAMKPC) {
      pNVar3 = (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
    }
  }
  return pNVar3;
}


// ===== public void add_OnClickBattle(Action<OOMHDDBCBJP> CJNHFNHJHPE)  [RVA 0x33473A8]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$add_OnClickBattle @ RVA 0x33473A8

void Nekki_SF2_GUI_Map_ZoneScrollItem__add_OnClickBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE
               ,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OOMHDDBCBJP__o *pSVar5;
  System_Action_OOMHDDBCBJP__o *a;
  
  if ((DAT_045679cd & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    DAT_045679cd = 1;
  }
  a = (__this->fields).CGHGGKBEHIF;
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
    pSVar5 = (System_Action_OOMHDDBCBJP__o *)FUN_01c07368(&(__this->fields).CGHGGKBEHIF,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void Enabled(bool CJNHFNHJHPE)  [RVA 0x334745C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$Enabled @ RVA 0x334745C

void Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  UnityEngine_Behaviour_o *__this_01;
  int index;
  
  if ((DAT_045679ce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Item__);
    DAT_045679ce = 1;
  }
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      __this_01 = (UnityEngine_Behaviour_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<BattleButton>_get_Item__);
      if (__this_01 == (UnityEngine_Behaviour_o *)0x0) break;
      UnityEngine_Behaviour__set_enabled(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (__this->fields).PGCBEJGMIMA;
    } while (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectBattle()  [RVA 0x3347504]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$SelectBattle @ RVA 0x3347504

void Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  OOMHDDBCBJP_o *pOVar1;
  System_Action_OOMHDDBCBJP__o *pSVar2;
  
  pOVar1 = (__this->fields).KOGBPIPIKFA;
  if ((pOVar1 == (OOMHDDBCBJP_o *)0x0) || ((pOVar1->fields).HHDBIGKBMEC == false)) {
    Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle(__this,method);
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_ZoneScrollItem__LKLHLGLCEOM(__this,method);
  pSVar2 = (__this->fields).CGHGGKBEHIF;
  if (pSVar2 != (System_Action_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03447548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(__this->fields).KOGBPIPIKFA,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateBattleFocus()  [RVA 0x3347714]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$UpdateBattleFocus @ RVA 0x3347714

void Nekki_SF2_GUI_Map_ZoneScrollItem__UpdateBattleFocus
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  pOVar2 = (__this->fields).KOGBPIPIKFA;
  if ((pOVar2 != (OOMHDDBCBJP_o *)0x0) &&
     (bVar1 = OOMHDDBCBJP__EFLKILFFJKH(pOVar2,(MethodInfo *)0x0), bVar1)) {
    pOVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__ChooseClosestBattle
                       (__this,(__this->fields).KOGBPIPIKFA,in_x2);
    (__this->fields).KOGBPIPIKFA = pOVar2;
    thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA,pOVar2);
    Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle(__this,method_00);
    return;
  }
  return;
}


// ===== public void SetBackgroundColor(Color EFJKPCADGJH)  [RVA 0x3347980]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$SetBackgroundColor @ RVA 0x3347980

void Nekki_SF2_GUI_Map_ZoneScrollItem__SetBackgroundColor
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if ((DAT_045679cf & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    DAT_045679cf = 1;
  }
  (__this->fields).ILHMFFCAIFD.fields.r = EFJKPCADGJH.fields.r;
  (__this->fields).ILHMFFCAIFD.fields.g = EFJKPCADGJH.fields.g;
  (__this->fields).ILHMFFCAIFD.fields.b = EFJKPCADGJH.fields.b;
  (__this->fields).ILHMFFCAIFD.fields.a = EFJKPCADGJH.fields.a;
  pIVar1 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03447a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar1->klass->vtable[0x17].methodPtr)
              ((__this->fields).ILHMFFCAIFD.fields.r,(__this->fields).ILHMFFCAIFD.fields.g,
               (__this->fields).ILHMFFCAIFD.fields.b,(__this->fields).ILHMFFCAIFD.fields.a,pIVar1,
               pIVar1->klass->vtable[0x17].method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateBattleHidden(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3347A20]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$UpdateBattleHidden @ RVA 0x3347A20

void Nekki_SF2_GUI_Map_ZoneScrollItem__UpdateBattleHidden
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_BattleButton_o *BECCOGAMKJL;
  MethodInfo *method_00;
  
  if ((DAT_045679d0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679d0 = 1;
  }
  BECCOGAMKJL = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,BANHBMINMMP,method);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)BECCOGAMKJL,
                     (MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Map_ZoneScrollItem__GPAECDJPJPF(__this,BECCOGAMKJL,method_00);
    return;
  }
  return;
}


// ===== private void GPAECDJPJPF(BattleButton BECCOGAMKJL)  [RVA 0x334718C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$GPAECDJPJPF @ RVA 0x334718C

void Nekki_SF2_GUI_Map_ZoneScrollItem__GPAECDJPJPF
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,
               Nekki_SF2_GUI_Map_BattleButton_o *BECCOGAMKJL,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  OLKPEJMEBPJ_o *__this_00;
  OOMHDDBCBJP_o *pOVar1;
  
  if ((BECCOGAMKJL == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) ||
     (pOVar1 = (BECCOGAMKJL->fields).CLMFOMEABFA, pOVar1 == (OOMHDDBCBJP_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (pOVar1->fields).LFJPDELEIHG;
  if (__this_00 == (OLKPEJMEBPJ_o *)0x0) {
    if ((BECCOGAMKJL->fields).GEOICCNOABO == false) goto LAB_034471f0;
    CJNHFNHJHPE = false;
  }
  else {
    CJNHFNHJHPE = OLKPEJMEBPJ__EFLKILFFJKH(__this_00,(MethodInfo *)0x0);
    if (CJNHFNHJHPE == ((BECCOGAMKJL->fields).GEOICCNOABO != false)) goto LAB_034471f0;
  }
  Nekki_SF2_GUI_Map_BattleButton__set_Hidden(BECCOGAMKJL,CJNHFNHJHPE,(MethodInfo *)0x0);
LAB_034471f0:
  Nekki_SF2_GUI_Map_BattleButton__SetActiveBattle
            (BECCOGAMKJL,(BECCOGAMKJL->fields).CLMFOMEABFA == (__this->fields).KOGBPIPIKFA,
             (MethodInfo *)0x0);
  return;
}


// ===== public OOMHDDBCBJP get_LastBattle()  [RVA 0x3347C14]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$get_LastBattle @ RVA 0x3347C14

OOMHDDBCBJP_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__get_LastBattle
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).KOGBPIPIKFA;
}


// ===== public BattleButton GetButtonByBattle(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3347ABC]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$GetButtonByBattle @ RVA 0x3347ABC

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045679d1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    DAT_045679d1 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 == (System_Collections_Generic_List_BattleButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    if (!bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
      break;
    }
    if ((Nekki_SF2_GUI_Map_BattleButton_o *)local_48.fields._current ==
        (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar2 = (Nekki_SF2_GUI_Map_BattleButton_o *)local_48.fields._current;
  } while (((Nekki_SF2_GUI_Map_BattleButton_Fields *)((long)local_48.fields._current + 0x10))->
           CLMFOMEABFA != BANHBMINMMP);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
  return pNVar2;
}


// ===== private BattleButton BEAPAMLLBOM(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3347C1C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$BEAPAMLLBOM @ RVA 0x3347C1C

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__BEAPAMLLBOM
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  void **ppvVar2;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
  if ((DAT_045679d2 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC_GLBBFALLPLL__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045679d2 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar2 = &__this_00[1].monitor;
    *ppvVar2 = BANHBMINMMP;
    thunk_FUN_01c20e04(ppvVar2,BANHBMINMMP);
    __this_01 = Nekki_SF2_GUI_Map_ZoneScrollItem__GIJLHPDBFEK(__this,*ppvVar2,method);
    if (__this_01 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
      __this_02 = (UnityEngine_Events_UnityEvent_o *)(__this_01->fields).super.super.super.m_OnClick
      ;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
        if (*ppvVar2 != (OOMHDDBCBJP_o *)0x0) {
          bVar1 = OOMHDDBCBJP__KFMAFEPOEIB(*ppvVar2,(MethodInfo *)0x0);
          (__this_01->fields).KAKCIFAKCBG = bVar1;
          Nekki_SF2_GUI_Map_BattleButton__set_Battle(__this_01,*ppvVar2,(MethodInfo *)0x0);
          if (*ppvVar2 != (OOMHDDBCBJP_o *)0x0) {
            bVar1 = OOMHDDBCBJP__EFLKILFFJKH(*ppvVar2,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_BattleButton__set_Hidden(__this_01,bVar1,(MethodInfo *)0x0);
            return __this_01;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(MEJIKMPNBNL BHHBEIACGPB)  [RVA 0x3347E9C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$Init @ RVA 0x3347E9C

void Nekki_SF2_GUI_Map_ZoneScrollItem__Init
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,
               MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  (__this->fields).IAJBEJGMIMM = BHHBEIACGPB;
  thunk_FUN_01c20e04(&(__this->fields).IAJBEJGMIMM);
  Nekki_SF2_GUI_Map_ZoneScrollItem__HEHGKGEGBBD(__this,method_00);
  Nekki_SF2_GUI_Map_ZoneScrollItem__DMPINOLCLCB(__this,method_01);
  return;
}


// ===== private BattleButton MHGPPDDCAPI(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x33481B0]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$MHGPPDDCAPI @ RVA 0x33481B0

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__MHGPPDDCAPI
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar2;
  System_Collections_Generic_List_BattleButton__o *pSVar3;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  int index;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045679d3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_set_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5419/*"DisplayZone::recreateButtonByBattle ERROR - btn is NULL"*/);
    DAT_045679d3 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pNVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,BANHBMINMMP,method);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_5419/*"DisplayZone::recreateButtonByBattle ERROR - btn is NULL"*/,(MethodInfo *)0x0);
    return (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
  }
  pSVar3 = (__this->fields).PGCBEJGMIMA;
  if (pSVar3 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    index = 0;
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__
                             ), x = local_70.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0)
      ;
      if (bVar1) break;
      index = index + 1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    if (pNVar2 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      pNVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__BEAPAMLLBOM(__this,BANHBMINMMP,method_00);
      if ((pNVar2 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         BANHBMINMMP != (OOMHDDBCBJP_o *)0x0)) {
        fVar4 = (BANHBMINMMP->fields).BBCFCIAPOKE.fields.x;
        fVar5 = (BANHBMINMMP->fields).BBCFCIAPOKE.fields.y;
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UVar6 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UVar6.fields.y = fVar5 + fVar5;
            UVar6.fields.x = fVar4 + fVar4;
            UnityEngine_Transform__set_localPosition(__this_00,UVar6,(MethodInfo *)0x0);
            bVar1 = OOMHDDBCBJP__EFLKILFFJKH(BANHBMINMMP,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_BattleButton__set_Hidden(pNVar2,bVar1,(MethodInfo *)0x0);
            pSVar3 = (__this->fields).PGCBEJGMIMA;
            if (pSVar3 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
              System_Collections_Generic_List<object>__set_Item
                        ((System_Collections_Generic_List_object__o *)pSVar3,index,
                         (Il2CppObject *)pNVar2,
                         Method_System_Collections_Generic_List<BattleButton>_set_Item__);
              return pNVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x334849C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$OnDestroy @ RVA 0x334849C

void Nekki_SF2_GUI_Map_ZoneScrollItem__OnDestroy
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BattleButton__o *__this_00;
  Il2CppObject *pIVar1;
  int index;
  
  if ((DAT_045679d4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Item__);
    DAT_045679d4 = 1;
  }
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        (__this->fields).CGHGGKBEHIF = (System_Action_OOMHDDBCBJP__o *)0x0;
        thunk_FUN_01c20e04(&(__this->fields).CGHGGKBEHIF,0);
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<BattleButton>_get_Item__);
      if ((pIVar1 == (Il2CppObject *)0x0) || (pIVar1[0x10].klass == (Il2CppClass *)0x0)) break;
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pIVar1[0x10].klass,(MethodInfo *)0x0);
      __this_00 = (__this->fields).PGCBEJGMIMA;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectFirstBattle()  [RVA 0x3347550]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$SelectFirstBattle @ RVA 0x3347550

void Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  OOMHDDBCBJP_o *pOVar2;
  MEJIKMPNBNL_o *pMVar3;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045679d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    DAT_045679d5 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pMVar3 = (__this->fields).IAJBEJGMIMM;
  if ((pMVar3 != (MEJIKMPNBNL_o *)0x0) &&
     (__this_00 = (pMVar3->fields).BDCBJJGNPMC,
     __this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)) {
    if (0 < (__this_00->fields)._size) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                          );
        pOVar2 = (OOMHDDBCBJP_o *)local_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
          pOVar2 = (OOMHDDBCBJP_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
          goto LAB_0344766c;
        }
        if ((OOMHDDBCBJP_o *)local_48.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (((OOMHDDBCBJP_Fields *)((long)local_48.fields._current + 0x10))->HHDBIGKBMEC == false
              );
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
LAB_0344766c:
      if (__this == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_03447698;
      (__this->fields).KOGBPIPIKFA = pOVar2;
      thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA,pOVar2);
    }
    return;
  }
LAB_03447698:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetLastBattle(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3348548]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$SetLastBattle @ RVA 0x3348548

void Nekki_SF2_GUI_Map_ZoneScrollItem__SetLastBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  (__this->fields).KOGBPIPIKFA = BANHBMINMMP;
  thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA);
  return;
}


// ===== public int CompareTo(ZoneScrollItem IBKIPBJJCPG)  [RVA 0x3348558]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$CompareTo @ RVA 0x3348558

int32_t Nekki_SF2_GUI_Map_ZoneScrollItem__CompareTo
                  (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,
                  Nekki_SF2_GUI_Map_ZoneScrollItem_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o **ppSVar2;
  int32_t iVar3;
  MEJIKMPNBNL_o *pMVar4;
  
  if ((DAT_045679d6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045679d6 = 1;
  }
  pMVar4 = (__this->fields).IAJBEJGMIMM;
  ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
  if (pMVar4 != (MEJIKMPNBNL_o *)0x0) {
    ppSVar1 = &(pMVar4->fields).DEKCPPOJFEH;
  }
  if ((IBKIPBJJCPG != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) &&
     (*ppSVar1 != (System_String_o *)0x0)) {
    pMVar4 = (IBKIPBJJCPG->fields).IAJBEJGMIMM;
    ppSVar2 = (System_String_o **)&StringLiteral_1/*""*/;
    if (pMVar4 != (MEJIKMPNBNL_o *)0x0) {
      ppSVar2 = &(pMVar4->fields).DEKCPPOJFEH;
    }
    iVar3 = System_String__CompareTo(*ppSVar1,*ppSVar2,(MethodInfo *)0x0);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public OOMHDDBCBJP ChooseClosestBattle(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3347770]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$ChooseClosestBattle @ RVA 0x3347770

OOMHDDBCBJP_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__ChooseClosestBattle
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_Collections_Generic_List_BattleButton__o *__this_01;
  UnityEngine_Object_o *__this_02;
  OOMHDDBCBJP_o *pOVar3;
  UnityEngine_Object_o *x;
  int index;
  double dVar4;
  double dVar5;
  undefined8 in_d1;
  undefined4 uVar6;
  double dVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  uVar6 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_045679d7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Item__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679d7 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,BANHBMINMMP,method);
  if ((__this_00 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      __this_01 = (__this->fields).PGCBEJGMIMA;
      if (__this_01 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
        index = (__this_01->fields)._size + -1;
        if (index < 0) {
          x = (UnityEngine_Object_o *)0x0;
LAB_03447920:
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          pOVar3 = (OOMHDDBCBJP_o *)0x0;
          if (bVar1) {
            if (x == (UnityEngine_Object_o *)0x0) goto LAB_0344797c;
            pOVar3 = (OOMHDDBCBJP_o *)x[0x12].fields.m_CachedPtr;
          }
          return pOVar3;
        }
        dVar7 = 2147483647.0;
        x = (UnityEngine_Object_o *)0x0;
        do {
          __this_02 = (UnityEngine_Object_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,index,
                                 Method_System_Collections_Generic_List<BattleButton>_get_Item__);
          if ((__this_02 == (UnityEngine_Object_o *)0x0) ||
             (pOVar3 = (OOMHDDBCBJP_o *)
                       ((UnityEngine_Object_Fields *)&__this_02[0x12].fields.m_CachedPtr)->
                       m_CachedPtr, pOVar3 == (OOMHDDBCBJP_o *)0x0)) break;
          if (((pOVar3->fields).HHDBIGKBMEC != false) &&
             (bVar1 = OOMHDDBCBJP__EFLKILFFJKH(pOVar3,(MethodInfo *)0x0), !bVar1)) {
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
            UVar10 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
            UVar11 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UVar11.fields.x,CONCAT44(uVar6,UVar11.fields.y),UVar11.fields.z);
            }
            dVar4 = System_Math__Pow((double)(UVar10.fields.x - UVar8.fields.x),2.0,
                                     (MethodInfo *)0x0);
            uVar6 = 0x40000000;
            dVar5 = System_Math__Pow((double)(UVar11.fields.y - UVar9.fields.y),2.0,
                                     (MethodInfo *)0x0);
            if (dVar4 + dVar5 < dVar7) {
              x = __this_02;
              dVar7 = dVar4 + dVar5;
            }
          }
          index = index + -1;
          if (index < 0) goto LAB_03447920;
          __this_01 = (__this->fields).PGCBEJGMIMA;
        } while (__this_01 != (System_Collections_Generic_List_BattleButton__o *)0x0);
      }
    }
  }
LAB_0344797c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectBattleByDirection(Vector2 FAGFGDBOLDP)  [RVA 0x33485DC]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$SelectBattleByDirection @ RVA 0x33485DC

void Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattleByDirection
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,UnityEngine_Vector2_o FAGFGDBOLDP,
               MethodInfo *method)

{
  OOMHDDBCBJP_o **ppOVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  System_Action_OOMHDDBCBJP__o *pSVar3;
  
  pOVar2 = (__this->fields).KOGBPIPIKFA;
  ppOVar1 = &(__this->fields).KOGBPIPIKFA;
  if ((pOVar2 == (OOMHDDBCBJP_o *)0x0) || ((pOVar2->fields).HHDBIGKBMEC == false)) {
    Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle(__this,(MethodInfo *)pOVar2);
    method_00 = extraout_x1_00;
  }
  else {
    pOVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__HONFCKEHAGD(__this,pOVar2,FAGFGDBOLDP,in_x2);
    if (pOVar2 == (OOMHDDBCBJP_o *)0x0) {
      return;
    }
    *ppOVar1 = pOVar2;
    thunk_FUN_01c20e04(ppOVar1,pOVar2);
    EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_Map_ZoneScrollItem__LKLHLGLCEOM(__this,method_00);
  pSVar3 = (__this->fields).CGHGGKBEHIF;
  if (pSVar3 != (System_Action_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03448658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,*ppOVar1,(pSVar3->fields).super.super.method
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetLastBattle(string EIMGAMOELIN)  [RVA 0x33488D4]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$SetLastBattle @ RVA 0x33488D4

void Nekki_SF2_GUI_Map_ZoneScrollItem__SetLastBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,System_String_o *EIMGAMOELIN,
               MethodInfo *method)

{
  MEJIKMPNBNL_o *__this_00;
  OOMHDDBCBJP_o *pOVar1;
  
  __this_00 = (__this->fields).IAJBEJGMIMM;
  if (__this_00 != (MEJIKMPNBNL_o *)0x0) {
    pOVar1 = MEJIKMPNBNL__KKPHCCBPIMN(__this_00,EIMGAMOELIN,(MethodInfo *)0x0);
    (__this->fields).KOGBPIPIKFA = pOVar1;
    thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FPODMPDLBLL(OOMHDDBCBJP ODPBAKKAAMP, int FAOACNMBIME, bool MJDICHGKPGE, bool DKEIBNDDFOM = True, bool NLBIOFGMMOO = False)  [RVA 0x3348904]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$FPODMPDLBLL @ RVA 0x3348904

void Nekki_SF2_GUI_Map_ZoneScrollItem__FPODMPDLBLL
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *ODPBAKKAAMP,
               int32_t FAOACNMBIME,bool MJDICHGKPGE,bool DKEIBNDDFOM,bool NLBIOFGMMOO,
               MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  int32_t local_44;
  
  local_44 = FAOACNMBIME;
  if ((DAT_045679d8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5418/*"DisplayZone::activeBattle - no button "*/);
    DAT_045679d8 = 1;
  }
  if (ODPBAKKAAMP != (OOMHDDBCBJP_o *)0x0) {
    __this_00 = (__this->fields).PGCBEJGMIMA;
    if (__this_00 == (System_Collections_Generic_List_BattleButton__o *)0x0) {
LAB_03448b88:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (FAOACNMBIME < (__this_00->fields)._size) {
      pMVar5 = Method_System_Collections_Generic_List<BattleButton>_get_Item__;
      __this_01 = (Nekki_SF2_GUI_Map_BattleButton_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,FAOACNMBIME,
                             (MethodInfo_26E4ADC *)
                             Method_System_Collections_Generic_List<BattleButton>_get_Item__);
      if (__this_01 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) goto LAB_03448b88;
      bVar1 = (__this_01->fields).KAKCIFAKCBG;
      bVar2 = OOMHDDBCBJP__KFMAFEPOEIB(ODPBAKKAAMP,(MethodInfo *)0x0);
      if ((bVar1 != false) != bVar2) {
        __this_01 = Nekki_SF2_GUI_Map_ZoneScrollItem__MHGPPDDCAPI(__this,ODPBAKKAAMP,pMVar5);
      }
      (ODPBAKKAAMP->fields).HHDBIGKBMEC = MJDICHGKPGE;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (MJDICHGKPGE) {
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (__this_01 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) goto LAB_03448b88;
          if (NLBIOFGMMOO) {
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            bVar2 = OOMHDDBCBJP__EFLKILFFJKH(ODPBAKKAAMP,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03448b88;
            UnityEngine_GameObject__SetActive(pUVar3,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
          }
          else {
            Nekki_SF2_GUI_Map_BattleButton__SetAlpha(__this_01,0.0,0.0,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03448b88;
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_BattleButton__SetAlpha(__this_01,1.0,0.5,(MethodInfo *)0x0);
          }
        }
        (__this->fields).KOGBPIPIKFA = ODPBAKKAAMP;
        thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA,ODPBAKKAAMP);
        pMVar5 = extraout_x1_02;
      }
      else {
        bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0)
        ;
        pMVar5 = extraout_x1;
        if (bVar2) {
          if ((__this_01 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) ||
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
             pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03448b88;
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          pMVar5 = extraout_x1_00;
        }
        if (ODPBAKKAAMP == (__this->fields).KOGBPIPIKFA) {
          Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle(__this,pMVar5);
          pMVar5 = extraout_x1_01;
        }
      }
      if (DKEIBNDDFOM) {
        Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle(__this,pMVar5);
        return;
      }
    }
    else {
      pSVar4 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(StringLiteral_5418/*"DisplayZone::activeBattle - no button "*/,pSVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    }
  }
  return;
}


// ===== private BattleButton GIJLHPDBFEK(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3347D6C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$GIJLHPDBFEK @ RVA 0x3347D6C

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__GIJLHPDBFEK
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar2;
  
  if ((DAT_045679d9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BattleButton>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679d9 = 1;
  }
  pUVar2 = (__this->fields).BattleBtnPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar2 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_Map_BattleButton_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar2,Method_UnityEngine_GameObject_GetComponent<BattleButton>__),
      __this_00 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0)) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Map_BattleButton__Init(__this_00,BANHBMINMMP,(MethodInfo *)0x0);
        if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_03447e98;
        Nekki_SF2_GUI_Map_BattleButton__SetAlias
                  (__this_00,(BANHBMINMMP->fields).FHPNAJENHNG,(MethodInfo *)0x0);
      }
      return __this_00;
    }
  }
LAB_03447e98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private BattleButton PNNGGAEAEIE(BattleButton MOIPALCHOPH, Vector2 FAGFGDBOLDP)  [RVA 0x3348B8C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$PNNGGAEAEIE @ RVA 0x3348B8C

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__PNNGGAEAEIE
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,Nekki_SF2_GUI_Map_BattleButton_o *MOIPALCHOPH,
          UnityEngine_Vector2_o FAGFGDBOLDP,MethodInfo *method)

{
  UnityEngine_Vector2_o LHHGNLJGDDD;
  bool bVar1;
  Il2CppObject *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_Collections_Generic_List_object__o *__this_01;
  System_Predicate_BattleButton__o **ppSVar3;
  System_Comparison_T__o *comparison;
  System_Predicate_BattleButton__o *match;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar4;
  System_Collections_Generic_List_BattleButton__o *collection;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 in_d2;
  undefined4 uVar8;
  UnityEngine_Vector3_o UVar9;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  
  uVar8 = (undefined4)((ulong)in_d2 >> 0x20);
  uVar7 = (undefined4)((ulong)register0x00005020 >> 0x20);
  if ((DAT_045679da & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK_JKKDMDHLGNA__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK_TypeInfo);
    FUN_01bab630(&System_Comparison<BattleButton>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BattleButton>_TypeInfo);
    FUN_01bab630(&System_Predicate<BattleButton>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_KPIFPIGJBCJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo);
    DAT_045679da = 1;
  }
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if ((MOIPALCHOPH != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)MOIPALCHOPH,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar9 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      *(float *)&__this_00[1].klass = UVar9.fields.x;
      *(float *)((long)&__this_00[1].klass + 4) = UVar9.fields.y;
      collection = (__this->fields).PGCBEJGMIMA;
      __this_01 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(UVar9.fields.x,CONCAT44(uVar7,UVar9.fields.y),
                                     CONCAT44(uVar8,UVar9.fields.z),
                                     System_Collections_Generic_List<BattleButton>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<BattleButton>__ctor__);
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__Remove
                  (__this_01,(Il2CppObject *)MOIPALCHOPH,
                   Method_System_Collections_Generic_List<BattleButton>_Remove__);
        if ((Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->static_fields->__9__38_0;
        if (match == (System_Predicate_BattleButton__o *)0x0) {
          if ((Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          match = (System_Predicate_BattleButton__o *)
                  thunk_FUN_01bda818(System_Predicate<BattleButton>_TypeInfo);
          System_Predicate<object>___ctor();
          ppSVar3 = &Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->static_fields->__9__38_0;
          *ppSVar3 = match;
          thunk_FUN_01c20e04(ppSVar3,match);
        }
        System_Collections_Generic_List<object>__RemoveAll
                  (__this_01,(System_Predicate_T__o *)match,
                   Method_System_Collections_Generic_List<BattleButton>_RemoveAll__);
        comparison = (System_Comparison_T__o *)
                     thunk_FUN_01bda818(System_Comparison<BattleButton>_TypeInfo);
        System_Comparison<object>___ctor();
        System_Collections_Generic_List<object>__Sort
                  (__this_01,comparison,Method_System_Collections_Generic_List<BattleButton>_Sort__)
        ;
        fVar5 = LFFOOBFIJHP__BHKAMEOBPEG(FAGFGDBOLDP,(MethodInfo *)0x0);
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,__this_01,
                   Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_88,
                             Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__
                            );
          pNVar4 = (Nekki_SF2_GUI_Map_BattleButton_o *)local_88.fields._current;
          if (!bVar1) {
            pNVar4 = (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
            break;
          }
          if ((Nekki_SF2_GUI_Map_BattleButton_o *)local_88.fields._current ==
              (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LHHGNLJGDDD.fields = (UnityEngine_Vector2_Fields)__this_00[1].klass;
          pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)local_88.fields._current,(MethodInfo *)0x0)
          ;
          if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar9 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
          fVar6 = LFFOOBFIJHP__EHFFMNBMNNF
                            (LHHGNLJGDDD,(UnityEngine_Vector2_o)UVar9.fields._0_8_,(MethodInfo *)0x0
                            );
        } while (50.0 <= ABS(fVar6 - fVar5));
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_88,
                   Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
        return pNVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3348F5C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$.ctor @ RVA 0x3348F5C

void Nekki_SF2_GUI_Map_ZoneScrollItem___ctor
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o **ppSVar1;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OOMHDDBCBJP__o *pSVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_045679db & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BattleButton>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_HDMHEGAHCCK__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo);
    DAT_045679db = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->static_fields->__9__41_0;
  if (pSVar2 == (System_Action_OOMHDDBCBJP__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->static_fields->__9__41_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
    (__this->fields).CGHGGKBEHIF = pSVar2;
    thunk_FUN_01c20e04(&(__this->fields).CGHGGKBEHIF,pSVar2);
    __this_00 = (System_Collections_Generic_List_BattleButton__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<BattleButton>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BattleButton>__ctor__);
    (__this->fields).PGCBEJGMIMA = __this_00;
    thunk_FUN_01c20e04(&(__this->fields).PGCBEJGMIMA,__this_00);
    auVar3 = NEON_fmov(0x3f800000,4);
    (__this->fields).ILHMFFCAIFD.fields.b = (float)(int)auVar3._8_8_;
    (__this->fields).ILHMFFCAIFD.fields.a = (float)(int)((ulong)auVar3._8_8_ >> 0x20);
    (__this->fields).ILHMFFCAIFD.fields.r = (float)(int)auVar3._0_8_;
    (__this->fields).ILHMFFCAIFD.fields.g = (float)(int)((ulong)auVar3._0_8_ >> 0x20);
    Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private OOMHDDBCBJP HONFCKEHAGD(OOMHDDBCBJP ODPEIFGHKNG, Vector2 FAGFGDBOLDP)  [RVA 0x334866C]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$HONFCKEHAGD @ RVA 0x334866C

OOMHDDBCBJP_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__HONFCKEHAGD
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *ODPEIFGHKNG,
          UnityEngine_Vector2_o FAGFGDBOLDP,MethodInfo *method)

{
  bool bVar1;
  int32_t layerMask;
  Nekki_SF2_GUI_Map_BattleButton_o *MOIPALCHOPH;
  UnityEngine_Behaviour_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_CircleCollider2D_o *__this_01;
  System_String_array *layerNames;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_02;
  Nekki_SF2_GUI_Map_BattleButton_o *x;
  OOMHDDBCBJP_o *pOVar3;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_RaycastHit2D_o local_e0;
  UnityEngine_RaycastHit2D_o local_b8;
  UnityEngine_Vector2_Fields local_90;
  UnityEngine_Vector2_Fields UStack_88;
  UnityEngine_Vector2_Fields UStack_80;
  float fStack_78;
  float fStack_74;
  int32_t local_70;
  
  if ((DAT_045679dc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Physics2D_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_3432/*"BattleButtons"*/);
    DAT_045679dc = 1;
  }
  MOIPALCHOPH = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,ODPEIFGHKNG,method);
  if ((MOIPALCHOPH != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) &&
     (pUVar2 = (UnityEngine_Behaviour_o *)(MOIPALCHOPH->fields)._Collider,
     pUVar2 != (UnityEngine_Behaviour_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled(pUVar2,false,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)MOIPALCHOPH,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      __this_01 = (MOIPALCHOPH->fields)._Collider;
      if (__this_01 != (UnityEngine_CircleCollider2D_o *)0x0) {
        fVar4 = UnityEngine_CircleCollider2D__get_radius(__this_01,(MethodInfo *)0x0);
        layerNames = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
        if (layerNames != (System_String_array *)0x0) {
          if ((int)layerNames->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          layerNames->m_Items[0] = StringLiteral_3432/*"BattleButtons"*/;
          thunk_FUN_01c20e04();
          layerMask = UnityEngine_LayerMask__GetMask(layerNames,(MethodInfo *)0x0);
          if ((UnityEngine_Physics2D_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Physics2D_TypeInfo);
          }
          UnityEngine_Physics2D__CircleCast
                    (&local_b8,(UnityEngine_Vector2_o)UVar5.fields._0_8_,fVar4 * 0.3,FAGFGDBOLDP,
                     5000.0,layerMask,(MethodInfo *)0x0);
          UStack_88 = local_b8.fields.m_Point.fields;
          local_90 = local_b8.fields.m_Centroid.fields;
          fStack_78 = local_b8.fields.m_Distance;
          fStack_74 = local_b8.fields.m_Fraction;
          UStack_80 = local_b8.fields.m_Normal.fields;
          local_70 = local_b8.fields.m_Collider;
          pUVar2 = (UnityEngine_Behaviour_o *)(MOIPALCHOPH->fields)._Collider;
          if (pUVar2 != (UnityEngine_Behaviour_o *)0x0) {
            UnityEngine_Behaviour__set_enabled(pUVar2,true,(MethodInfo *)0x0);
            local_e0.fields.m_Point.fields = UStack_88;
            local_e0.fields.m_Centroid.fields = local_90;
            local_e0.fields.m_Distance = fStack_78;
            local_e0.fields.m_Fraction = fStack_74;
            local_e0.fields.m_Normal.fields = UStack_80;
            local_e0.fields.m_Collider = local_70;
            x = Nekki_SF2_GUI_Map_ZoneScrollItem__JJBHJFAOOBN(__this_02,&local_e0,ODPEIFGHKNG,in_x3)
            ;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
            }
            method_00 = (MethodInfo *)0x0;
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              x = Nekki_SF2_GUI_Map_ZoneScrollItem__PNNGGAEAEIE
                            (__this,MOIPALCHOPH,FAGFGDBOLDP,method_00);
            }
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              Nekki_SF2_GUI_Map_BattleButton__Shake(MOIPALCHOPH,FAGFGDBOLDP,(MethodInfo *)0x0);
              pOVar3 = (OOMHDDBCBJP_o *)0x0;
            }
            else {
              if (x == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) goto LAB_034488cc;
              pOVar3 = (x->fields).CLMFOMEABFA;
            }
            return pOVar3;
          }
        }
      }
    }
  }
LAB_034488cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DMPINOLCLCB()  [RVA 0x3347EC4]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$DMPINOLCLCB @ RVA 0x3347EC4

void Nekki_SF2_GUI_Map_ZoneScrollItem__DMPINOLCLCB
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *BANHBMINMMP;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  System_Collections_Generic_List_BattleButton__o *__this_04;
  undefined8 uVar6;
  MethodInfo *in_x2;
  MEJIKMPNBNL_o *pMVar7;
  Nekki_SF2_GUI_Map_BattleButton_array *pNVar8;
  OOMHDDBCBJP_o *pOVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  undefined1 auVar13 [16];
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = __this;
  if ((DAT_045679dd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    auVar13 = FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    DAT_045679dd = 1;
  }
  uVar6 = auVar13._0_8_;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pMVar7 = (__this->fields).IAJBEJGMIMM;
  if (pMVar7 != (MEJIKMPNBNL_o *)0x0) {
    __this_00 = (pMVar7->fields).BDCBJJGNPMC;
    uVar6 = 0;
    if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        do {
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                            );
          BANHBMINMMP = local_80.fields._current;
          if (!bVar4) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
            return;
          }
          if ((OOMHDDBCBJP_o *)local_80.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
          if ((((OOMHDDBCBJP_c *)(local_80.fields._current)->klass)->_2).naturalAligment < bVar1) {
            pOVar9 = (OOMHDDBCBJP_o *)0x0;
          }
          else {
            pOVar9 = (OOMHDDBCBJP_o *)local_80.fields._current;
            if ((((OOMHDDBCBJP_c *)(local_80.fields._current)->klass)->_2).typeHierarchy
                [(ulong)bVar1 - 1] != (Il2CppClass *)OHDDKGHEEPA_TypeInfo) {
              pOVar9 = (OOMHDDBCBJP_o *)0x0;
            }
          }
          iVar5 = OOMHDDBCBJP__NHGGBEACKBD
                            ((OOMHDDBCBJP_o *)local_80.fields._current,(MethodInfo *)0x0);
        } while (((iVar5 == 0xf) ||
                 (((OOMHDDBCBJP_Fields *)((long)BANHBMINMMP + 0x10))->CILMHNDFBPH != false)) ||
                ((pOVar9 != (OOMHDDBCBJP_o *)0x0 && (*(int *)&pOVar9[1].fields.LFJPDELEIHG == 1))));
        __this_01 = Nekki_SF2_GUI_Map_ZoneScrollItem__BEAPAMLLBOM
                              (__this,(OOMHDDBCBJP_o *)BANHBMINMMP,in_x2);
        if (__this_01 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        fVar10 = (((OOMHDDBCBJP_Fields *)((long)BANHBMINMMP + 0x10))->BBCFCIAPOKE).fields.x;
        fVar11 = (((OOMHDDBCBJP_Fields *)((long)BANHBMINMMP + 0x10))->BBCFCIAPOKE).fields.y;
        __this_03 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_Transform_o *)0x0) break;
        UVar12 = UnityEngine_Transform__get_localPosition(__this_03,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(UVar12.fields.x,UVar12.fields.y);
        }
        UVar12.fields.y = fVar11 + fVar11;
        UVar12.fields.x = fVar10 + fVar10;
        UnityEngine_Transform__set_localPosition(__this_02,UVar12,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<BattleButton>_Add__;
        __this_04 = (__this->fields).PGCBEJGMIMA;
        if (__this_04 == (System_Collections_Generic_List_BattleButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pNVar8 = (__this_04->fields)._items;
        (__this_04->fields)._version = (__this_04->fields)._version + 1;
        if (pNVar8 == (Nekki_SF2_GUI_Map_BattleButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pNVar8->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pNVar8->m_Items[(int)uVar2] = __this_01;
          thunk_FUN_01c20e04(pNVar8->m_Items + (int)uVar2,__this_01);
        }
        else {
          in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,
                     (Il2CppObject *)__this_01,(MethodInfo_26E4DAC *)in_x2);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar6,auVar13._8_8_);
}


// ===== public MEJIKMPNBNL get_Zone()  [RVA 0x33490A8]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$get_Zone @ RVA 0x33490A8

MEJIKMPNBNL_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__get_Zone
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).IAJBEJGMIMM;
}


// ===== public void remove_OnClickBattle(Action<OOMHDDBCBJP> CJNHFNHJHPE)  [RVA 0x33490B0]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$remove_OnClickBattle @ RVA 0x33490B0

void Nekki_SF2_GUI_Map_ZoneScrollItem__remove_OnClickBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE
               ,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OOMHDDBCBJP__o *pSVar5;
  System_Action_OOMHDDBCBJP__o *source;
  
  if ((DAT_045679de & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    DAT_045679de = 1;
  }
  source = (__this->fields).CGHGGKBEHIF;
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
    pSVar5 = (System_Action_OOMHDDBCBJP__o *)
             FUN_01c07368(&(__this->fields).CGHGGKBEHIF,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void CLFOCFLKKKF(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3349164]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$CLFOCFLKKKF @ RVA 0x3349164

void Nekki_SF2_GUI_Map_ZoneScrollItem__CLFOCFLKKKF
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).KOGBPIPIKFA = BANHBMINMMP;
  thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA);
  Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle(__this,method_00);
  return;
}


// ===== public BattleButton GetBattleButtonByBattleName(string EIMGAMOELIN)  [RVA 0x3349184]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$GetBattleButtonByBattleName @ RVA 0x3349184

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__GetBattleButtonByBattleName
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,System_String_o *EIMGAMOELIN,
          MethodInfo *method)

{
  MEJIKMPNBNL_o *__this_00;
  OOMHDDBCBJP_o *BANHBMINMMP;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar1;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).IAJBEJGMIMM;
  if (__this_00 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (MethodInfo *)0x0;
  BANHBMINMMP = MEJIKMPNBNL__KKPHCCBPIMN(__this_00,EIMGAMOELIN,(MethodInfo *)0x0);
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    pNVar1 = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,BANHBMINMMP,method_00);
    return pNVar1;
  }
  return (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
}


// ===== public void ActiveBattle(string NJEOLDEAMCP, bool MJDICHGKPGE, bool DKEIBNDDFOM = True, bool NLBIOFGMMOO = False)  [RVA 0x33491BC]
// Nekki.SF2.GUI.Map.ZoneScrollItem$$ActiveBattle @ RVA 0x33491BC

void Nekki_SF2_GUI_Map_ZoneScrollItem__ActiveBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,System_String_o *NJEOLDEAMCP,
               bool MJDICHGKPGE,bool DKEIBNDDFOM,bool NLBIOFGMMOO,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *ODPBAKKAAMP;
  bool bVar2;
  int32_t iVar3;
  System_String_o *message;
  MethodInfo *in_x6;
  MEJIKMPNBNL_o *pMVar4;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  int FAOACNMBIME;
  OOMHDDBCBJP_o *pOVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045679df & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&StringLiteral_5417/*"DisplayZone::activeBattle - cant find name "*/);
    DAT_045679df = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pMVar4 = (__this->fields).IAJBEJGMIMM;
  if ((pMVar4 == (MEJIKMPNBNL_o *)0x0) ||
     (__this_00 = (pMVar4->fields).BDCBJJGNPMC,
     __this_00 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
  FAOACNMBIME = 0;
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    ODPBAKKAAMP = local_80.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
LAB_034493e8:
      message = System_String__Concat(StringLiteral_5417/*"DisplayZone::activeBattle - cant find name "*/,NJEOLDEAMCP,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return;
    }
    if ((OOMHDDBCBJP_o *)local_80.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      (((OOMHDDBCBJP_Fields *)((long)local_80.fields._current + 0x10))->DEKCPPOJFEH,
                       NJEOLDEAMCP,(MethodInfo *)0x0);
    if (bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
      if (FAOACNMBIME < (__this_00->fields)._size) {
        Nekki_SF2_GUI_Map_ZoneScrollItem__FPODMPDLBLL
                  (__this,(OOMHDDBCBJP_o *)ODPBAKKAAMP,FAOACNMBIME,MJDICHGKPGE,DKEIBNDDFOM,
                   NLBIOFGMMOO,in_x6);
        return;
      }
      goto LAB_034493e8;
    }
    bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
    if ((((OOMHDDBCBJP_c *)ODPBAKKAAMP->klass)->_2).naturalAligment < bVar1) {
      pOVar5 = (OOMHDDBCBJP_o *)0x0;
    }
    else {
      pOVar5 = (OOMHDDBCBJP_o *)ODPBAKKAAMP;
      if ((((OOMHDDBCBJP_c *)ODPBAKKAAMP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)OHDDKGHEEPA_TypeInfo) {
        pOVar5 = (OOMHDDBCBJP_o *)0x0;
      }
    }
    iVar3 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)ODPBAKKAAMP,(MethodInfo *)0x0);
    if (((iVar3 != 0xf) &&
        (((OOMHDDBCBJP_Fields *)((long)ODPBAKKAAMP + 0x10))->CILMHNDFBPH == false)) &&
       ((pOVar5 == (OOMHDDBCBJP_o *)0x0 || (*(int *)&pOVar5[1].fields.LFJPDELEIHG != 1)))) {
      FAOACNMBIME = FAOACNMBIME + 1;
    }
  } while( true );
}

