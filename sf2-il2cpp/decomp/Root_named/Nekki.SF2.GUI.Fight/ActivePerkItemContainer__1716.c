// TypeDefIndex 1716
// Namespace: Nekki.SF2.GUI.Fight
// public class ActivePerkItemContainer : MonoBehaviour
// Fields:
//   private const float NONKJDEMDHP = 10;
//   private float PHBEOHIEDOP; // 0x20
//   private float KIFDEDHNJCA; // 0x24
//   private string <FOMKDILDPCJ>k__BackingField; // 0x28
//   private float <ABKFKMLEFHA>k__BackingField; // 0x30
//   private bool <PBMMCACCKNJ>k__BackingField; // 0x34
//   private List<ActivePerkItem> DOKOOFIPJGJ; // 0x38

// ===== public void Destroy()  [RVA 0x31D657C]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$Destroy @ RVA 0x31D657C

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__Destroy
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  (__this->fields)._PBMMCACCKNJ_k__BackingField = true;
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x31D65A0]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$.ctor @ RVA 0x31D65A0

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer___ctor
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  System_Collections_Generic_List_ActivePerkItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ce8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ActivePerkItem>_TypeInfo);
    DAT_04566ce8 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ActivePerkItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ActivePerkItem>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
  ppSVar1 = &(__this->fields).DOKOOFIPJGJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void set_Stack(string CJNHFNHJHPE)  [RVA 0x31D6628]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$set_Stack @ RVA 0x31D6628

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__set_Stack
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._FOMKDILDPCJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void AddActivePerk(ActivePerkItem EIKFGOCCOIE)  [RVA 0x31D6630]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$AddActivePerk @ RVA 0x31D6630

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__AddActivePerk
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,
               Nekki_SF2_GUI_Fight_ActivePerkItem_o *EIKFGOCCOIE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_ActivePerkItem__o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Fight_ActivePerkItem_array *pNVar6;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04566ce9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566ce9 = 1;
  }
  if (EIKFGOCCOIE != (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)EIKFGOCCOIE,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      (EIKFGOCCOIE->fields)._HKOKBFOCJID_k__BackingField = 0;
      lVar2 = Method_System_Collections_Generic_List<ActivePerkItem>_Add__;
      pSVar4 = (__this->fields).DOKOOFIPJGJ;
      if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
        pNVar6 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pNVar6 != (Nekki_SF2_GUI_Fight_ActivePerkItem_array *)0x0) {
          uVar1 = (pSVar4->fields)._size;
          if (uVar1 < (uint)pNVar6->max_length) {
            (pSVar4->fields)._size = uVar1 + 1;
            pNVar6->m_Items[(int)uVar1] = EIKFGOCCOIE;
            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,EIKFGOCCOIE);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (Il2CppObject *)EIKFGOCCOIE,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar4 = (__this->fields).DOKOOFIPJGJ;
          if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
            System_Collections_Generic_List<object>__Sort
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       Method_System_Collections_Generic_List<ActivePerkItem>_Sort__);
            pSVar4 = (__this->fields).DOKOOFIPJGJ;
            if ((pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) &&
               (pIVar5 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar4,
                                    (pSVar4->fields)._size + -1,
                                    Method_System_Collections_Generic_List<ActivePerkItem>_get_Item__
                                   ), pIVar5 != (Il2CppObject *)0x0)) {
              *(int *)((long)&pIVar5[5].monitor + 4) = *(int *)((long)&pIVar5[5].monitor + 4) + 1;
              __this_01 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
                __this_01 = (UnityEngine_RectTransform_o *)0x0;
              }
              else if (__this_01->klass != UnityEngine_RectTransform_TypeInfo) {
                __this_01 = (UnityEngine_RectTransform_o *)0x0;
              }
              __this_02 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)EIKFGOCCOIE,(MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
                __this_02 = (UnityEngine_RectTransform_o *)0x0;
              }
              else if (__this_02->klass != UnityEngine_RectTransform_TypeInfo) {
                __this_02 = (UnityEngine_RectTransform_o *)0x0;
              }
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar3) {
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar3 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar3) {
                  if ((__this_02 != (UnityEngine_RectTransform_o *)0x0) &&
                     (value = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0),
                     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
                    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
                    return;
                  }
                  goto LAB_032d6874;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_032d6874:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Render()  [RVA 0x31D6878]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$Render @ RVA 0x31D6878

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__Render
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_ActivePerkItem__o *pSVar4;
  System_Action_T__o *action;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566cea & 1) == 0) {
    FUN_01bab630(&System_Action<ActivePerkItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ActivePerkItemContainer_OCFPDBGAFPE__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<ActivePerkItem>_TypeInfo);
    DAT_04566cea = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_Fight_ActivePerkItemContainer__JJONOCGMEMK(__this,method);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ActivePerkItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
  pSVar4 = (__this->fields).DOKOOFIPJGJ;
  if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__
                        );
      item = local_70.fields._current;
      if (!bVar3) break;
      if ((Nekki_SF2_GUI_Fight_ActivePerkItem_o *)local_70.fields._current ==
          (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Fight_ActivePerkItem__Render
                ((Nekki_SF2_GUI_Fight_ActivePerkItem_o *)local_70.fields._current,(MethodInfo *)0x0)
      ;
      lVar2 = Method_System_Collections_Generic_List<ActivePerkItem>_Add__;
      if (((Nekki_SF2_GUI_Fight_ActivePerkItem_Fields *)((long)item + 0x10))->
          _PBMMCACCKNJ_k__BackingField != false) {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__
              );
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<ActivePerkItem>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                (__this_00,action,Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
      pSVar4 = (__this->fields).DOKOOFIPJGJ;
      if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
        if ((pSVar4->fields)._size == 0) {
          (__this->fields)._PBMMCACCKNJ_k__BackingField = true;
          LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(float EDCGCMAKCOM = 0, float PFHCGPLGLHC = 0)  [RVA 0x31D6BFC]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$Init @ RVA 0x31D6BFC

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__Init
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,float EDCGCMAKCOM,
               float PFHCGPLGLHC,MethodInfo *method)

{
  (__this->fields).PHBEOHIEDOP = EDCGCMAKCOM;
  (__this->fields).KIFDEDHNJCA = PFHCGPLGLHC;
  (__this->fields)._ABKFKMLEFHA_k__BackingField = 0.0;
  (__this->fields)._PBMMCACCKNJ_k__BackingField = false;
  return;
}


// ===== private void OCFPDBGAFPE(ActivePerkItem KEFILECBPMF)  [RVA 0x31D6C0C]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$OCFPDBGAFPE @ RVA 0x31D6C0C

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__OCFPDBGAFPE
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,
               Nekki_SF2_GUI_Fight_ActivePerkItem_o *KEFILECBPMF,MethodInfo *method)

{
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  
  if ((DAT_04566ceb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Remove__);
    DAT_04566ceb = 1;
  }
  __this_00 = (__this->fields).DOKOOFIPJGJ;
  if (__this_00 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)KEFILECBPMF,
               Method_System_Collections_Generic_List<ActivePerkItem>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PIJMGOGCFCD(bool CJNHFNHJHPE)  [RVA 0x31D6C64]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$PIJMGOGCFCD @ RVA 0x31D6C64

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__PIJMGOGCFCD
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._PBMMCACCKNJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void JJONOCGMEMK()  [RVA 0x31D6B54]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$JJONOCGMEMK @ RVA 0x31D6B54

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__JJONOCGMEMK
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UVar6 = UnityEngine_Transform__get_localPosition(pUVar1,(MethodInfo *)0x0);
    fVar2 = UVar6.fields.x;
    fVar5 = (__this->fields)._ABKFKMLEFHA_k__BackingField;
    if (fVar2 == fVar5) {
      return;
    }
    fVar4 = -10.0;
    if (fVar2 <= fVar5) {
      fVar4 = 10.0;
    }
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      fVar3 = fVar2 + fVar4;
      if (fVar5 < fVar2 == fVar2 + fVar4 <= fVar5) {
        fVar3 = fVar5;
      }
      UVar6.fields.x = fVar3;
      UVar6.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(pUVar1,UVar6,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_NeedDelete()  [RVA 0x31D6C70]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$get_NeedDelete @ RVA 0x31D6C70

bool Nekki_SF2_GUI_Fight_ActivePerkItemContainer__get_NeedDelete
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._PBMMCACCKNJ_k__BackingField;
}


// ===== public float get_FinishPosX()  [RVA 0x31D6C78]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$get_FinishPosX @ RVA 0x31D6C78

float Nekki_SF2_GUI_Fight_ActivePerkItemContainer__get_FinishPosX
                (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._ABKFKMLEFHA_k__BackingField;
}


// ===== public string get_Stack()  [RVA 0x31D6C80]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$get_Stack @ RVA 0x31D6C80

System_String_o *
Nekki_SF2_GUI_Fight_ActivePerkItemContainer__get_Stack
          (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._FOMKDILDPCJ_k__BackingField;
}


// ===== public void set_FinishPosX(float CJNHFNHJHPE)  [RVA 0x31D6C88]
// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$set_FinishPosX @ RVA 0x31D6C88

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__set_FinishPosX
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._ABKFKMLEFHA_k__BackingField = CJNHFNHJHPE;
  return;
}

