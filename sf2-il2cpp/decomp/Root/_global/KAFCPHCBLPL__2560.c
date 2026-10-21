// TypeDefIndex 2560
// Namespace: 
// public class KAFCPHCBLPL
// Fields:
//   private List<IENLNOEDCFF> KDIMDBHMBEM; // 0x10
//   public bool FMGLHJDODPA; // 0x18
//   public ObscuredInt JAHFGPMFLGN; // 0x1C

// ===== public bool PCPBHJGAOOH(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x339C478]
// KAFCPHCBLPL$$PCPBHJGAOOH @ RVA 0x339C478

bool KAFCPHCBLPL__PCPBHJGAOOH(KAFCPHCBLPL_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  Il2CppObject *pIVar2;
  ulong uVar3;
  int index;
  
  if ((DAT_04567c83 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Item__);
    DAT_04567c83 = 1;
  }
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_0349c50c:
        return iVar1 <= index;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      uVar3 = (*pIVar2->klass->vtable[4].methodPtr)
                        (pIVar2,AHEFOIOKDOK,pIVar2->klass->vtable[4].method);
      if ((uVar3 & 1) == 0) goto LAB_0349c50c;
      __this_00 = (__this->fields).KDIMDBHMBEM;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(List<IENLNOEDCFF> AHEFOIOKDOK)  [RVA 0x339C524]
// KAFCPHCBLPL$$.ctor @ RVA 0x339C524

void KAFCPHCBLPL___ctor(KAFCPHCBLPL_o *__this,
                       System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
                       MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_04567c84 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    DAT_04567c84 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).FMGLHJDODPA = false;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).JAHFGPMFLGN.fields = CVar1;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    AHEFOIOKDOK = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
               Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  }
  (__this->fields).KDIMDBHMBEM = AHEFOIOKDOK;
  thunk_FUN_01c20e04(&__this->fields,AHEFOIOKDOK);
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x339C5C4]
// KAFCPHCBLPL$$RandomizeObscuredVars @ RVA 0x339C5C4

void KAFCPHCBLPL__RandomizeObscuredVars(KAFCPHCBLPL_o *__this,MethodInfo *method)

{
  System_Action_IENLNOEDCFF__o **ppSVar1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  System_Action_IENLNOEDCFF__o *action;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  
  if ((DAT_04567c85 & 1) == 0) {
    FUN_01bab630(&System_Action<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
    FUN_01bab630(&Method_KAFCPHCBLPL_<>c_OCLFJIFMNMO__);
    FUN_01bab630(&KAFCPHCBLPL_<>c_TypeInfo);
    DAT_04567c85 = 1;
  }
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).JAHFGPMFLGN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if ((KAFCPHCBLPL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = KAFCPHCBLPL_<>c_TypeInfo->static_fields->__9__5_0;
  if (action == (System_Action_IENLNOEDCFF__o *)0x0) {
    if ((KAFCPHCBLPL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_IENLNOEDCFF__o *)thunk_FUN_01bda818(System_Action<IENLNOEDCFF>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &KAFCPHCBLPL_<>c_TypeInfo->static_fields->__9__5_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

