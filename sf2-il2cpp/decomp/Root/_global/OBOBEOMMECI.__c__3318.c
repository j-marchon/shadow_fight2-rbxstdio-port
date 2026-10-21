// TypeDefIndex 3318
// Namespace: 
// [Serializable]
// private sealed class OBOBEOMMECI.<>c
// Fields:
//   public static readonly OBOBEOMMECI.<>c <>9; // 0x0
//   public static Action<MGNDHCBAPEN<string, OBOBEOMMECI>> <>9__31_0; // 0x8
//   public static Action<MGNDHCBAPEN<ECENNHNBAME, float>> <>9__31_1; // 0x10
//   public static Action<MGNDHCBAPEN<ECENNHNBAME, float>> <>9__31_2; // 0x18

// ===== internal void NKDGLBACCIE(MGNDHCBAPEN<ECENNHNBAME, float> x)  [RVA 0x3528E3C]
// OBOBEOMMECI.<>c$$NKDGLBACCIE @ RVA 0x3528E3C

void OBOBEOMMECI_<>c__NKDGLBACCIE
               (OBOBEOMMECI___c_o *__this,MGNDHCBAPEN_ECENNHNBAME__float__o *x,MethodInfo *method)

{
  ECENNHNBAME_o *__this_00;
  
  if (x == (MGNDHCBAPEN_ECENNHNBAME__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (x->fields).PHPELPFMOII;
  if (__this_00 != (ECENNHNBAME_o *)0x0) {
    ECENNHNBAME__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3528E64]
// OBOBEOMMECI.<>c$$.ctor @ RVA 0x3528E64

void OBOBEOMMECI_<>c___ctor(OBOBEOMMECI___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void KOLOJLEELJE(MGNDHCBAPEN<ECENNHNBAME, float> x)  [RVA 0x3528E6C]
// OBOBEOMMECI.<>c$$KOLOJLEELJE @ RVA 0x3528E6C

void OBOBEOMMECI_<>c__KOLOJLEELJE
               (OBOBEOMMECI___c_o *__this,MGNDHCBAPEN_ECENNHNBAME__float__o *x,MethodInfo *method)

{
  ECENNHNBAME_o *__this_00;
  
  if (x == (MGNDHCBAPEN_ECENNHNBAME__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (x->fields).PHPELPFMOII;
  if (__this_00 != (ECENNHNBAME_o *)0x0) {
    ECENNHNBAME__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== internal void HMJINIHEOFI(MGNDHCBAPEN<string, OBOBEOMMECI> x)  [RVA 0x3528E94]
// OBOBEOMMECI.<>c$$HMJINIHEOFI @ RVA 0x3528E94

void OBOBEOMMECI_<>c__HMJINIHEOFI
               (OBOBEOMMECI___c_o *__this,MGNDHCBAPEN_string__OBOBEOMMECI__o *x,MethodInfo *method)

{
  OBOBEOMMECI_o *__this_00;
  
  if ((x != (MGNDHCBAPEN_string__OBOBEOMMECI__o *)0x0) &&
     (__this_00 = (x->fields).DOKHHBGJICA, __this = (OBOBEOMMECI___c_o *)0x0,
     __this_00 != (OBOBEOMMECI_o *)0x0)) {
    OBOBEOMMECI__RandomizeObscuredVars(__this_00,(MethodInfo *)x);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private static void .cctor()  [RVA 0x3528EB0]
// OBOBEOMMECI.<>c$$.cctor @ RVA 0x3528EB0

void OBOBEOMMECI_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568a09 & 1) == 0) {
    FUN_01bab630(&OBOBEOMMECI_<>c_TypeInfo);
    DAT_04568a09 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(OBOBEOMMECI_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  OBOBEOMMECI_<>c_TypeInfo->static_fields->__9 = (OBOBEOMMECI___c_o *)__this;
  thunk_FUN_01c20e04(OBOBEOMMECI_<>c_TypeInfo->static_fields,__this);
  return;
}

