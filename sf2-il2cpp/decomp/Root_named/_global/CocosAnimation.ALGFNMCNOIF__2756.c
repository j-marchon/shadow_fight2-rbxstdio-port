// TypeDefIndex 2756
// Namespace: 
// [CompilerGenerated]
// private sealed class CocosAnimation.ALGFNMCNOIF
// Fields:
//   public string namePrefix; // 0x10

// ===== internal bool EHPIOCDLNEM(Sprite sprite)  [RVA 0x33F8884]
// CocosAnimation.ALGFNMCNOIF$$EHPIOCDLNEM @ RVA 0x33F8884

bool CocosAnimation_ALGFNMCNOIF__EHPIOCDLNEM
               (CocosAnimation_ALGFNMCNOIF_o *__this,UnityEngine_Sprite_o *sprite,MethodInfo *method
               )

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((DAT_04567f9f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f9f = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)sprite,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((sprite != (UnityEngine_Sprite_o *)0x0) &&
       (__this_00 = UnityEngine_Object__get_name((UnityEngine_Object_o *)sprite,(MethodInfo *)0x0),
       __this_00 != (System_String_o *)0x0)) {
      bVar1 = System_String__StartsWith(__this_00,(__this->fields).namePrefix,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== public void .ctor()  [RVA 0x33F8854]
// CocosAnimation.ALGFNMCNOIF$$.ctor @ RVA 0x33F8854

void CocosAnimation_ALGFNMCNOIF___ctor(CocosAnimation_ALGFNMCNOIF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

