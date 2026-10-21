// TypeDefIndex 1274
// Namespace: Nekki.SF2.GUI
// public class ModuleHolder : MonoBehaviour
// Fields:
//   private List<UIModule> _MountOnStart; // 0x20
//   private List<UIModule> _MountOnStart_Mobiles; // 0x28
//   private List<UIModule> _MountOnStart_Steam; // 0x30
//   private List<UIModule> _MountOnStart_Switch; // 0x38
//   private List<UIModule> _MountOnLater; // 0x40
//   private List<UIModule> _MountOnLater_Mobiles; // 0x48
//   private List<UIModule> _MountOnLater_Steam; // 0x50
//   private List<UIModule> _MountOnLater_Switch; // 0x58
//   private List<UIModule> LPIPKHINEJH; // 0x60
//   private List<UIModule> FAGFCHOFHPG; // 0x68
//   private static ModuleHolder JIDGIFKNLGJ; // 0x0

// ===== private void PLFDCCKIGHJ()  [RVA 0x314DA08]
// Nekki.SF2.GUI.ModuleHolder$$PLFDCCKIGHJ @ RVA 0x314DA08

void Nekki_SF2_GUI_ModuleHolder__PLFDCCKIGHJ
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_UIModule__o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_045667dd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Clear__);
    DAT_045667dd = 1;
  }
  pSVar1 = (__this->fields).LPIPKHINEJH;
  if (pSVar1 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).LPIPKHINEJH;
      if (pSVar1 == (System_Collections_Generic_List_UIModule__o *)0x0) goto LAB_0324daac;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._MountOnStart,
               Method_System_Collections_Generic_List<UIModule>_AddRange__);
    pSVar1 = (__this->fields).LPIPKHINEJH;
    if (pSVar1 != (System_Collections_Generic_List_UIModule__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar1,
                 (System_Collections_Generic_IEnumerable_T__o *)
                 (__this->fields)._MountOnStart_Mobiles,
                 Method_System_Collections_Generic_List<UIModule>_AddRange__);
      Nekki_SF2_GUI_ModuleHolder__BGGBJPGPKPF((__this->fields).LPIPKHINEJH,method_00);
      return;
    }
  }
LAB_0324daac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void OnDestroy()  [RVA 0x314DBB0]
// Nekki.SF2.GUI.ModuleHolder$$OnDestroy @ RVA 0x314DBB0

void Nekki_SF2_GUI_ModuleHolder__OnDestroy(Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  if ((DAT_045667de & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_045667de = 1;
  }
  Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ =
       (Nekki_SF2_GUI_ModuleHolder_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields,0);
  return;
}


// ===== public List<UIModule> ActiveModules()  [RVA 0x314DC04]
// Nekki.SF2.GUI.ModuleHolder$$ActiveModules @ RVA 0x314DC04

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__ActiveModules(Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIModule__o *LKFALEIFDIO;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045667df & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIModule>_TypeInfo);
    DAT_045667df = 1;
    method = extraout_x1;
  }
  LKFALEIFDIO = (System_Collections_Generic_List_UIModule__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)LKFALEIFDIO,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  Nekki_SF2_GUI_ModuleHolder__JLJABEJHDOM((__this->fields).LPIPKHINEJH,LKFALEIFDIO,in_x2);
  Nekki_SF2_GUI_ModuleHolder__JLJABEJHDOM((__this->fields).FAGFCHOFHPG,LKFALEIFDIO,in_x2);
  return LKFALEIFDIO;
}


// ===== protected virtual bool BHOCDCGAHPA()  [RVA 0x314DDBC]
// Nekki.SF2.GUI.ModuleHolder$$BHOCDCGAHPA @ RVA 0x314DDBC

bool Nekki_SF2_GUI_ModuleHolder__BHOCDCGAHPA
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return true;
}


// ===== protected virtual void MEFBGILCOKN()  [RVA 0x314DDC4]
// Nekki.SF2.GUI.ModuleHolder$$MEFBGILCOKN @ RVA 0x314DDC4

void Nekki_SF2_GUI_ModuleHolder__MEFBGILCOKN
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return;
}


// ===== public List<UIModule> get_MountOnLater_Mobiles()  [RVA 0x314DDC8]
// Nekki.SF2.GUI.ModuleHolder$$get_MountOnLater_Mobiles @ RVA 0x314DDC8

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__get_MountOnLater_Mobiles
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return (__this->fields)._MountOnLater_Mobiles;
}


// ===== public UIModule GetModuleByName(string AFKICLAFDKC)  [RVA 0x314DDD0]
// Nekki.SF2.GUI.ModuleHolder$$GetModuleByName @ RVA 0x314DDD0

Nekki_SF2_GUI_UIModule_o *
Nekki_SF2_GUI_ModuleHolder__GetModuleByName
          (Nekki_SF2_GUI_ModuleHolder_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  Nekki_SF2_GUI_UIModule_o *pNVar1;
  
  if ((DAT_045667e0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045667e0 = 1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = Nekki_SF2_GUI_UIModule__GetModuleByName(AFKICLAFDKC,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== protected static void JLJABEJHDOM(List<UIModule> DDAAFGGCAHK, List<UIModule> LKFALEIFDIO)  [RVA 0x314DC90]
// Nekki.SF2.GUI.ModuleHolder$$JLJABEJHDOM @ RVA 0x314DC90

void Nekki_SF2_GUI_ModuleHolder__JLJABEJHDOM
               (System_Collections_Generic_List_UIModule__o *DDAAFGGCAHK,
               System_Collections_Generic_List_UIModule__o *LKFALEIFDIO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Component_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_UIModule_o *item;
  Nekki_SF2_GUI_UIModule_array *pNVar4;
  int index;
  
  if ((DAT_045667e1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_get_Item__);
    DAT_045667e1 = 1;
  }
  if (DDAAFGGCAHK != (System_Collections_Generic_List_UIModule__o *)0x0) {
    if (0 < (DDAAFGGCAHK->fields)._size) {
      index = 0;
      do {
        __this = (UnityEngine_Component_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)DDAAFGGCAHK,index,
                            Method_System_Collections_Generic_List<UIModule>_get_Item__);
        if ((__this == (UnityEngine_Component_o *)0x0) ||
           (__this_00 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0324ddb8;
        bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
        if (bVar3) {
          item = (Nekki_SF2_GUI_UIModule_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)DDAAFGGCAHK,index,
                            Method_System_Collections_Generic_List<UIModule>_get_Item__);
          lVar2 = Method_System_Collections_Generic_List<UIModule>_Add__;
          if (LKFALEIFDIO == (System_Collections_Generic_List_UIModule__o *)0x0) goto LAB_0324ddb8;
          pNVar4 = (LKFALEIFDIO->fields)._items;
          (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
          if (pNVar4 == (Nekki_SF2_GUI_UIModule_array *)0x0) goto LAB_0324ddb8;
          uVar1 = (LKFALEIFDIO->fields)._size;
          if (uVar1 < (uint)pNVar4->max_length) {
            (LKFALEIFDIO->fields)._size = uVar1 + 1;
            pNVar4->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)LKFALEIFDIO,(Il2CppObject *)item
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        index = index + 1;
      } while (index < (DDAAFGGCAHK->fields)._size);
    }
    return;
  }
LAB_0324ddb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x314DE28]
// Nekki.SF2.GUI.ModuleHolder$$.ctor @ RVA 0x314DE28

void Nekki_SF2_GUI_ModuleHolder___ctor(Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIModule__o *pSVar1;
  System_Collections_Generic_List_UIModule__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIModule>_TypeInfo);
    DAT_045667e2 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnStart;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnStart_Mobiles;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnStart_Steam;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnStart_Switch;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnLater;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnLater_Mobiles;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnLater_Steam;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnLater_Switch;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields).LPIPKHINEJH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields).FAGFCHOFHPG;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public List<UIModule> get_MountOnLater()  [RVA 0x314DFF4]
// Nekki.SF2.GUI.ModuleHolder$$get_MountOnLater @ RVA 0x314DFF4

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__get_MountOnLater
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return (__this->fields)._MountOnLater;
}


// ===== public List<UIModule> get_MountOnLater_Switch()  [RVA 0x314DFFC]
// Nekki.SF2.GUI.ModuleHolder$$get_MountOnLater_Switch @ RVA 0x314DFFC

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__get_MountOnLater_Switch
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return (__this->fields)._MountOnLater_Switch;
}


// ===== public List<UIModule> get_MountOnStart_Switch()  [RVA 0x314E004]
// Nekki.SF2.GUI.ModuleHolder$$get_MountOnStart_Switch @ RVA 0x314E004

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__get_MountOnStart_Switch
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return (__this->fields)._MountOnStart_Switch;
}


// ===== private void AFNDJEMIDKM()  [RVA 0x314E00C]
// Nekki.SF2.GUI.ModuleHolder$$AFNDJEMIDKM @ RVA 0x314E00C

void Nekki_SF2_GUI_ModuleHolder__AFNDJEMIDKM
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_UIModule__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045667e3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UIModule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UIModule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UIModule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_GetEnumerator__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045667e3 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).LPIPKHINEJH;
  if (pSVar3 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<UIModule>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<UIModule>_MoveNext__
                             ), pIVar1 = local_60.fields._current, bVar2) {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_SF2_GUI_UIModule__MountModule
                ((Nekki_SF2_GUI_UIModule_o *)pIVar1,pUVar4,true,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<UIModule>_Dispose__);
    pSVar3 = (__this->fields).FAGFCHOFHPG;
    if (pSVar3 != (System_Collections_Generic_List_UIModule__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<UIModule>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<UIModule>_MoveNext__
                               ), pIVar1 = local_60.fields._current, bVar2) {
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        Nekki_SF2_GUI_UIModule__MountModule
                  ((Nekki_SF2_GUI_UIModule_o *)pIVar1,pUVar4,false,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<UIModule>_Dispose__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Canvas get_Canvas()  [RVA 0x314E27C]
// Nekki.SF2.GUI.ModuleHolder$$get_Canvas @ RVA 0x314E27C

UnityEngine_Canvas_o *
Nekki_SF2_GUI_ModuleHolder__get_Canvas(Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  UnityEngine_Canvas_o *pUVar1;
  
  if ((DAT_045667e4 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Canvas>__);
    DAT_045667e4 = 1;
  }
  pUVar1 = (UnityEngine_Canvas_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<Canvas>__);
  return pUVar1;
}


// ===== private static void BGGBJPGPKPF(List<UIModule> EDEHNHIHDDH)  [RVA 0x314DAB0]
// Nekki.SF2.GUI.ModuleHolder$$BGGBJPGPKPF @ RVA 0x314DAB0

void Nekki_SF2_GUI_ModuleHolder__BGGBJPGPKPF
               (System_Collections_Generic_List_UIModule__o *EDEHNHIHDDH,MethodInfo *method)

{
  System_Comparison_UIModule__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Comparison_UIModule__o *comparison;
  
  if ((DAT_045667e5 & 1) == 0) {
    FUN_01bab630(&System_Comparison<UIModule>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Sort__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_<>c_EKLCINBJPAG__);
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo);
    DAT_045667e5 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  comparison = Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields->__9__39_0;
  if (comparison == (System_Comparison_UIModule__o *)0x0) {
    if ((Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo,method);
    }
    comparison = (System_Comparison_UIModule__o *)
                 thunk_FUN_01bda818(System_Comparison<UIModule>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields->__9__39_0;
    *ppSVar1 = comparison;
    thunk_FUN_01c20e04(ppSVar1,comparison);
  }
  if (EDEHNHIHDDH != (System_Collections_Generic_List_UIModule__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<UIModule>_Sort__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<UIModule> get_MountOnStart_Steam()  [RVA 0x314E2C4]
// Nekki.SF2.GUI.ModuleHolder$$get_MountOnStart_Steam @ RVA 0x314E2C4

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__get_MountOnStart_Steam
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return (__this->fields)._MountOnStart_Steam;
}


// ===== public static ModuleHolder get_CurrentModuleHolder()  [RVA 0x314E2CC]
// Nekki.SF2.GUI.ModuleHolder$$get_CurrentModuleHolder @ RVA 0x314E2CC

Nekki_SF2_GUI_ModuleHolder_o *
Nekki_SF2_GUI_ModuleHolder__get_CurrentModuleHolder(MethodInfo *method)

{
  if ((DAT_045667e6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_045667e6 = 1;
  }
  return Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ;
}


// ===== private void KPJJLFDBJCN()  [RVA 0x314E314]
// Nekki.SF2.GUI.ModuleHolder$$KPJJLFDBJCN @ RVA 0x314E314

void Nekki_SF2_GUI_ModuleHolder__KPJJLFDBJCN
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  System_Predicate_UIModule__o **ppSVar1;
  System_Collections_Generic_List_UIModule__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Predicate_UIModule__o *match;
  
  if ((DAT_045667e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
    FUN_01bab630(&System_Predicate<UIModule>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_<>c_CMEEANHGFBE__);
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo);
    DAT_045667e7 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields->__9__35_0;
  if (match == (System_Predicate_UIModule__o *)0x0) {
    if ((Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo,method);
    }
    match = (System_Predicate_UIModule__o *)thunk_FUN_01bda818(System_Predicate<UIModule>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields->__9__35_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  pSVar2 = (__this->fields)._MountOnStart;
  if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    System_Collections_Generic_List<object>__RemoveAll
              ((System_Collections_Generic_List_object__o *)pSVar2,(System_Predicate_T__o *)match,
               Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
    pSVar2 = (__this->fields)._MountOnStart_Mobiles;
    if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)pSVar2,(System_Predicate_T__o *)match,
                 Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
      pSVar2 = (__this->fields)._MountOnStart_Steam;
      if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
        System_Collections_Generic_List<object>__RemoveAll
                  ((System_Collections_Generic_List_object__o *)pSVar2,
                   (System_Predicate_T__o *)match,
                   Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
        pSVar2 = (__this->fields)._MountOnStart_Switch;
        if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
          System_Collections_Generic_List<object>__RemoveAll
                    ((System_Collections_Generic_List_object__o *)pSVar2,
                     (System_Predicate_T__o *)match,
                     Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
          pSVar2 = (__this->fields)._MountOnLater;
          if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
            System_Collections_Generic_List<object>__RemoveAll
                      ((System_Collections_Generic_List_object__o *)pSVar2,
                       (System_Predicate_T__o *)match,
                       Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
            pSVar2 = (__this->fields)._MountOnLater_Mobiles;
            if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
              System_Collections_Generic_List<object>__RemoveAll
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         (System_Predicate_T__o *)match,
                         Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
              pSVar2 = (__this->fields)._MountOnLater_Switch;
              if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
                System_Collections_Generic_List<object>__RemoveAll
                          ((System_Collections_Generic_List_object__o *)pSVar2,
                           (System_Predicate_T__o *)match,
                           Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
                pSVar2 = (__this->fields)._MountOnLater_Steam;
                if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
                  System_Collections_Generic_List<object>__RemoveAll
                            ((System_Collections_Generic_List_object__o *)pSVar2,
                             (System_Predicate_T__o *)match,
                             Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
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


// ===== public List<UIModule> get_MountOnStart()  [RVA 0x314E4A0]
// Nekki.SF2.GUI.ModuleHolder$$get_MountOnStart @ RVA 0x314E4A0

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__get_MountOnStart
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return (__this->fields)._MountOnStart;
}


// ===== public List<UIModule> get_MountOnStart_Mobiles()  [RVA 0x314E4A8]
// Nekki.SF2.GUI.ModuleHolder$$get_MountOnStart_Mobiles @ RVA 0x314E4A8

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__get_MountOnStart_Mobiles
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return (__this->fields)._MountOnStart_Mobiles;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x314E4B0]
// Nekki.SF2.GUI.ModuleHolder$$get_RectTransform @ RVA 0x314E4B0

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_ModuleHolder__get_RectTransform
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_045667e8 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_045667e8 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<RectTransform>__);
  return pUVar1;
}


// ===== public List<UIModule> get_MountOnLater_Steam()  [RVA 0x314E4F8]
// Nekki.SF2.GUI.ModuleHolder$$get_MountOnLater_Steam @ RVA 0x314E4F8

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__get_MountOnLater_Steam
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  return (__this->fields)._MountOnLater_Steam;
}


// ===== protected virtual void Awake()  [RVA 0x314E500]
// Nekki.SF2.GUI.ModuleHolder$$Awake @ RVA 0x314E500

void Nekki_SF2_GUI_ModuleHolder__Awake(Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0324e508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._8_NBEJKJDHNIP.methodPtr)
            (__this,(__this->klass->vtable)._8_NBEJKJDHNIP.method);
  return;
}


// ===== private void KGONKEMBJPH()  [RVA 0x314E50C]
// Nekki.SF2.GUI.ModuleHolder$$KGONKEMBJPH @ RVA 0x314E50C

void Nekki_SF2_GUI_ModuleHolder__KGONKEMBJPH
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_UIModule__o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_045667e9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Clear__);
    DAT_045667e9 = 1;
  }
  pSVar1 = (__this->fields).FAGFCHOFHPG;
  if (pSVar1 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).FAGFCHOFHPG;
      if (pSVar1 == (System_Collections_Generic_List_UIModule__o *)0x0) goto LAB_0324e5b0;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._MountOnLater,
               Method_System_Collections_Generic_List<UIModule>_AddRange__);
    pSVar1 = (__this->fields).FAGFCHOFHPG;
    if (pSVar1 != (System_Collections_Generic_List_UIModule__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar1,
                 (System_Collections_Generic_IEnumerable_T__o *)
                 (__this->fields)._MountOnLater_Mobiles,
                 Method_System_Collections_Generic_List<UIModule>_AddRange__);
      Nekki_SF2_GUI_ModuleHolder__BGGBJPGPKPF((__this->fields).FAGFCHOFHPG,method_00);
      return;
    }
  }
LAB_0324e5b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void NBEJKJDHNIP()  [RVA 0x314E5B4]
// Nekki.SF2.GUI.ModuleHolder$$NBEJKJDHNIP @ RVA 0x314E5B4

void Nekki_SF2_GUI_ModuleHolder__NBEJKJDHNIP
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  if ((DAT_045667ea & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_045667ea = 1;
  }
  Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields,__this);
  Nekki_SF2_GUI_ModuleHolder__KPJJLFDBJCN(__this,method_00);
  Nekki_SF2_GUI_ModuleHolder__PLFDCCKIGHJ(__this,method_01);
  Nekki_SF2_GUI_ModuleHolder__KGONKEMBJPH(__this,method_02);
  (*(__this->klass->vtable)._6_MEFBGILCOKN.methodPtr)
            (__this,(__this->klass->vtable)._6_MEFBGILCOKN.method);
  Nekki_SF2_GUI_ModuleHolder__AFNDJEMIDKM(__this,method_03);
  return;
}

