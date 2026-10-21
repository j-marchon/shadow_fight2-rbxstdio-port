// TypeDefIndex 2426
// Namespace: 
// [Serializable]
// private sealed class AFFHKININGD.<>c
// Fields:
//   public static readonly AFFHKININGD.<>c <>9; // 0x0
//   public static Action<JBCGDIEHOHH> <>9__59_0; // 0x8
//   public static Action<PJKHAJKEHEL> <>9__59_1; // 0x10
//   public static Func<NIAFDKHDBMA, bool> <>9__63_0; // 0x18
//   public static Func<NIAFDKHDBMA, int> <>9__64_1; // 0x20
//   public static Func<PJKHAJKEHEL, int> <>9__72_0; // 0x28
//   public static Func<AJNNHGGLGIF, bool> <>9__90_0; // 0x30

// ===== internal int IGNCEDGNDPM(PJKHAJKEHEL model)  [RVA 0x3343260]
// AFFHKININGD.<>c$$IGNCEDGNDPM @ RVA 0x3343260

int32_t AFFHKININGD_<>c__IGNCEDGNDPM
                  (AFFHKININGD___c_o *__this,PJKHAJKEHEL_o *model,MethodInfo *method)

{
  if (model != (PJKHAJKEHEL_o *)0x0) {
    return (model->fields).MGDHGEHGKBA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool FACLHKKNINP(AJNNHGGLGIF rule)  [RVA 0x3343278]
// AFFHKININGD.<>c$$FACLHKKNINP @ RVA 0x3343278

bool AFFHKININGD_<>c__FACLHKKNINP(AFFHKININGD___c_o *__this,AJNNHGGLGIF_o *rule,MethodInfo *method)

{
  int32_t iVar1;
  
  if (rule != (AJNNHGGLGIF_o *)0x0) {
    iVar1 = AJNNHGGLGIF__NHGGBEACKBD(rule,(MethodInfo *)0x0);
    return iVar1 == 0x23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x33432A0]
// AFFHKININGD.<>c$$.cctor @ RVA 0x33432A0

void AFFHKININGD_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045679a9 & 1) == 0) {
    FUN_01bab630(&AFFHKININGD_<>c_TypeInfo);
    DAT_045679a9 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(AFFHKININGD_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  AFFHKININGD_<>c_TypeInfo->static_fields->__9 = (AFFHKININGD___c_o *)__this;
  thunk_FUN_01c20e04(AFFHKININGD_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal int GBMHBCFCNEF(NIAFDKHDBMA rule)  [RVA 0x3343310]
// AFFHKININGD.<>c$$GBMHBCFCNEF @ RVA 0x3343310

int32_t AFFHKININGD_<>c__GBMHBCFCNEF
                  (AFFHKININGD___c_o *__this,NIAFDKHDBMA_o *rule,MethodInfo *method)

{
  if (rule != (NIAFDKHDBMA_o *)0x0) {
    return (rule->fields).DKOHFAHBPPE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void APMADPDPANM(JBCGDIEHOHH x)  [RVA 0x3343328]
// AFFHKININGD.<>c$$APMADPDPANM @ RVA 0x3343328

void AFFHKININGD_<>c__APMADPDPANM(AFFHKININGD___c_o *__this,JBCGDIEHOHH_o *x,MethodInfo *method)

{
  if (x != (JBCGDIEHOHH_o *)0x0) {
    JBCGDIEHOHH__RandomizeObscuredVars(x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void LHJKOBAJHBB(PJKHAJKEHEL x)  [RVA 0x3343340]
// AFFHKININGD.<>c$$LHJKOBAJHBB @ RVA 0x3343340

void AFFHKININGD_<>c__LHJKOBAJHBB(AFFHKININGD___c_o *__this,PJKHAJKEHEL_o *x,MethodInfo *method)

{
  if (x != (PJKHAJKEHEL_o *)0x0) {
    PJKHAJKEHEL__RandomizeObscuredVars(x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool MPDHKEFMGFL(NIAFDKHDBMA rule)  [RVA 0x3343358]
// AFFHKININGD.<>c$$MPDHKEFMGFL @ RVA 0x3343358

bool AFFHKININGD_<>c__MPDHKEFMGFL(AFFHKININGD___c_o *__this,NIAFDKHDBMA_o *rule,MethodInfo *method)

{
  bool bVar1;
  
  if (rule != (NIAFDKHDBMA_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((rule->fields).MLNFANFAMOO,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = false;
    }
    else {
      bVar1 = 0 < (rule->fields).DKOHFAHBPPE;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3343308]
// AFFHKININGD.<>c$$.ctor @ RVA 0x3343308

void AFFHKININGD_<>c___ctor(AFFHKININGD___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

