// TypeDefIndex 2205
// Namespace: Nekki.SF2.GUI.Scripts
// public class PlatformDependentElements : MonoBehaviour
// Fields:
//   public bool ActiveOnMobile; // 0x20
//   public bool ActiveOnSteam; // 0x21
//   public bool ActiveOnSwitch; // 0x22
//   public List<GameObject> Elements; // 0x28

// ===== private void Awake()  [RVA 0x32E8774]
// Nekki.SF2.GUI.Scripts.PlatformDependentElements$$Awake @ RVA 0x32E8774

void Nekki_SF2_GUI_Scripts_PlatformDependentElements__Awake
               (Nekki_SF2_GUI_Scripts_PlatformDependentElements_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_GameObject__o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567625 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GameObject>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GameObject>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GameObject>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_GetEnumerator__);
    DAT_04567625 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).Elements;
  if (__this_01 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<GameObject>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<GameObject>_MoveNext__);
    __this_00 = local_50.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<GameObject>_Dispose__);
      return;
    }
    if ((__this->fields).ActiveOnMobile == false) {
LAB_033e885c:
      if ((__this->fields).ActiveOnSteam != false) {
        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = EOAOCPLIKOI__DNNAOBIBCHJ((MethodInfo *)0x0);
        if (bVar1) goto LAB_033e8880;
      }
      bVar1 = false;
      if ((__this->fields).ActiveOnSwitch != false) {
        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = EOAOCPLIKOI__NJEBABGEFDJ((MethodInfo *)0x0);
      }
    }
    else {
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = EOAOCPLIKOI__ELJKIOEKHGI((MethodInfo *)0x0);
      if (!bVar1) goto LAB_033e885c;
LAB_033e8880:
      bVar1 = true;
    }
    if ((UnityEngine_GameObject_o *)__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_00,bVar1,(MethodInfo *)0x0)
    ;
  } while( true );
}


// ===== public void .ctor()  [RVA 0x32E8964]
// Nekki.SF2.GUI.Scripts.PlatformDependentElements$$.ctor @ RVA 0x32E8964

void Nekki_SF2_GUI_Scripts_PlatformDependentElements___ctor
               (Nekki_SF2_GUI_Scripts_PlatformDependentElements_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_GameObject__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567626 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    DAT_04567626 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GameObject>__ctor__);
  ppSVar1 = &(__this->fields).Elements;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

