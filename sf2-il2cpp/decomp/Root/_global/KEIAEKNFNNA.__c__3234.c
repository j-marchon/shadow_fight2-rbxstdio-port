// TypeDefIndex 3234
// Namespace: 
// [Serializable]
// private sealed class KEIAEKNFNNA.<>c
// Fields:
//   public static readonly KEIAEKNFNNA.<>c <>9; // 0x0
//   public static Func<MPAKDCNMLEG, bool> <>9__15_0; // 0x8
//   public static Action<Action> <>9__15_1; // 0x10
//   public static Action<Action> <>9__15_2; // 0x18
//   public static Func<FKNCNNOOOIO, bool> <>9__26_0; // 0x20

// ===== internal bool IPGKKCHGFCJ(FKNCNNOOOIO b)  [RVA 0x350863C]
// KEIAEKNFNNA.<>c$$IPGKKCHGFCJ @ RVA 0x350863C

bool KEIAEKNFNNA_<>c__IPGKKCHGFCJ(KEIAEKNFNNA___c_o *__this,FKNCNNOOOIO_o *b,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045688b1 & 1) == 0) {
    __this = (KEIAEKNFNNA___c_o *)FUN_01bab630(&StringLiteral_8583/*"LocalDaily"*/);
    DAT_045688b1 = 1;
  }
  if (b != (FKNCNNOOOIO_o *)0x0) {
    bVar1 = System_String__op_Equality((b->fields).JIJLBFGKNJK,StringLiteral_8583/*"LocalDaily"*/,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal void MNHPOELABEN(Action h)  [RVA 0x3508690]
// KEIAEKNFNNA.<>c$$MNHPOELABEN @ RVA 0x3508690

void KEIAEKNFNNA_<>c__MNHPOELABEN(KEIAEKNFNNA___c_o *__this,System_Action_o *h,MethodInfo *method)

{
  if ((DAT_045688b2 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045688b2 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(h,(MethodInfo *)0x0);
  return;
}


// ===== internal bool KPDBPHNOALH(MPAKDCNMLEG x)  [RVA 0x35086E8]
// KEIAEKNFNNA.<>c$$KPDBPHNOALH @ RVA 0x35086E8

bool KEIAEKNFNNA_<>c__KPDBPHNOALH(KEIAEKNFNNA___c_o *__this,int32_t x,MethodInfo *method)

{
  return x != 1;
}


// ===== internal void HHPMABOIHIO(Action h)  [RVA 0x35086F4]
// KEIAEKNFNNA.<>c$$HHPMABOIHIO @ RVA 0x35086F4

void KEIAEKNFNNA_<>c__HHPMABOIHIO(KEIAEKNFNNA___c_o *__this,System_Action_o *h,MethodInfo *method)

{
  if ((DAT_045688b3 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045688b3 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(h,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x350874C]
// KEIAEKNFNNA.<>c$$.cctor @ RVA 0x350874C

void KEIAEKNFNNA_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045688b4 & 1) == 0) {
    FUN_01bab630(&KEIAEKNFNNA_<>c_TypeInfo);
    DAT_045688b4 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(KEIAEKNFNNA_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9 = (KEIAEKNFNNA___c_o *)__this;
  thunk_FUN_01c20e04(KEIAEKNFNNA_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x35087B4]
// KEIAEKNFNNA.<>c$$.ctor @ RVA 0x35087B4

void KEIAEKNFNNA_<>c___ctor(KEIAEKNFNNA___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

