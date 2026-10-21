// TypeDefIndex 1790
// Namespace: 
// [Extension]
// public static class Util
// Fields:
//   public const float FBCDLIEHMKI = 1E-10;
//   public static bool IEGHLFIBMBL; // 0x0

// ===== public static string BNIOOKFFIGC(GameObject LAIGNDBNBJG)  [RVA 0x32097DC]
// Util$$BNIOOKFFIGC @ RVA 0x32097DC

System_String_o * Util__BNIOOKFFIGC(UnityEngine_GameObject_o *LAIGNDBNBJG,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566e65 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04566e65 = 1;
    method = extraout_x1;
  }
  __this = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (LAIGNDBNBJG != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(LAIGNDBNBJG,(MethodInfo *)0x0);
    while( true ) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) break;
      if ((__this_00 == (UnityEngine_Transform_o *)0x0) ||
         (__this_01 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Object_o *)0x0)) goto LAB_033098f8;
      pSVar2 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(pSVar2,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_033098f8;
      System_Text_StringBuilder__Insert(__this,0,pSVar2,(MethodInfo *)0x0);
      __this_00 = UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0);
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033098f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
LAB_033098f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float EGNDHMHOPCG(float MFENNGDJCMF, float CHOCOAGNFDD, float CIGIGIJOFMK, float BLFMJKGBOMI, float KEFILECBPMF)  [RVA 0x32098FC]
// Util$$EGNDHMHOPCG @ RVA 0x32098FC

float Util__EGNDHMHOPCG(float MFENNGDJCMF,float CHOCOAGNFDD,float CIGIGIJOFMK,float BLFMJKGBOMI,
                       float KEFILECBPMF,MethodInfo *method)

{
  float fVar1;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  local_48 = BLFMJKGBOMI;
  fStack_44 = CIGIGIJOFMK;
  local_38 = CHOCOAGNFDD;
  fStack_34 = MFENNGDJCMF;
  if ((DAT_04566e66 & 1) == 0) {
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<float>__);
    DAT_04566e66 = 1;
  }
  if (1e-10 <= ABS(BLFMJKGBOMI - CIGIGIJOFMK)) {
    fVar1 = CHOCOAGNFDD;
    if ((KEFILECBPMF < BLFMJKGBOMI) && (fVar1 = MFENNGDJCMF, CIGIGIJOFMK < KEFILECBPMF)) {
      fVar1 = BLFMJKGBOMI - CIGIGIJOFMK;
      if (fVar1 < 0.0) {
        Util__JGJFNOOGAEP<float>(&fStack_44,&local_48,Method_Util_JGJFNOOGAEP<float>__);
        Util__JGJFNOOGAEP<float>(&fStack_34,&local_38,Method_Util_JGJFNOOGAEP<float>__);
        fVar1 = local_48 - fStack_44;
        CIGIGIJOFMK = fStack_44;
        CHOCOAGNFDD = local_38;
        MFENNGDJCMF = fStack_34;
      }
      fVar1 = MFENNGDJCMF + (KEFILECBPMF - CIGIGIJOFMK) * ((CHOCOAGNFDD - MFENNGDJCMF) / fVar1);
    }
  }
  else {
    fVar1 = (MFENNGDJCMF + CHOCOAGNFDD) * 0.5;
  }
  return fVar1;
}


// ===== public static int JPFMDIGLLHB(long ELACKBJPMNB)  [RVA 0x32099F8]
// Util$$JPFMDIGLLHB @ RVA 0x32099F8

int32_t Util__JPFMDIGLLHB(int64_t ELACKBJPMNB,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  ulong uVar2;
  int iVar3;
  
  if ((DAT_04566e67 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566e67 = 1;
    method = extraout_x1;
  }
  iVar3 = 1;
  if (ELACKBJPMNB < 0) {
    iVar3 = 2;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  uVar2 = -ELACKBJPMNB;
  if (-1 < ELACKBJPMNB) {
    uVar2 = ELACKBJPMNB;
  }
  if (9 < uVar2) {
    do {
      iVar3 = iVar3 + 1;
      bVar1 = 99 < uVar2;
      uVar2 = uVar2 / 10;
    } while (bVar1);
  }
  return iVar3;
}


// ===== public static float LHJGHDKPFMC(float MFENNGDJCMF, float CHOCOAGNFDD, float CIGIGIJOFMK, float BLFMJKGBOMI, float KEFILECBPMF)  [RVA 0x3209A84]
// Util$$LHJGHDKPFMC @ RVA 0x3209A84

float Util__LHJGHDKPFMC(float MFENNGDJCMF,float CHOCOAGNFDD,float CIGIGIJOFMK,float BLFMJKGBOMI,
                       float KEFILECBPMF,MethodInfo *method)

{
  float fVar1;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  local_48 = BLFMJKGBOMI;
  fStack_44 = CIGIGIJOFMK;
  local_38 = CHOCOAGNFDD;
  fStack_34 = MFENNGDJCMF;
  if ((DAT_04566e68 & 1) == 0) {
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<float>__);
    DAT_04566e68 = 1;
  }
  if (1e-10 <= ABS(BLFMJKGBOMI - CIGIGIJOFMK)) {
    fVar1 = BLFMJKGBOMI - CIGIGIJOFMK;
    if (fVar1 < 0.0) {
      Util__JGJFNOOGAEP<float>(&fStack_44,&local_48,Method_Util_JGJFNOOGAEP<float>__);
      Util__JGJFNOOGAEP<float>(&fStack_34,&local_38,Method_Util_JGJFNOOGAEP<float>__);
      fVar1 = local_48 - fStack_44;
      CIGIGIJOFMK = fStack_44;
      MFENNGDJCMF = fStack_34;
      CHOCOAGNFDD = local_38;
    }
    fVar1 = MFENNGDJCMF + (KEFILECBPMF - CIGIGIJOFMK) * ((CHOCOAGNFDD - MFENNGDJCMF) / fVar1);
  }
  else {
    fVar1 = (MFENNGDJCMF + CHOCOAGNFDD) * 0.5;
  }
  return fVar1;
}


// ===== private static void RunOnStart()  [RVA 0x3209B64]
// Util$$RunOnStart @ RVA 0x3209B64

void Util__RunOnStart(MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_o *value;
  
  if ((DAT_04566e69 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_Util_<>c_AKPCDCNNOHH__);
    FUN_01bab630(&Util_<>c_TypeInfo);
    DAT_04566e69 = 1;
  }
  if ((Util_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  value = Util_<>c_TypeInfo->static_fields->__9__2_0;
  if (value == (System_Action_o *)0x0) {
    if ((Util_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    value = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Util_<>c_TypeInfo->static_fields->__9__2_0;
    *ppSVar1 = value;
    thunk_FUN_01c20e04(ppSVar1,value);
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Application__add_quitting(value,(MethodInfo *)0x0);
  return;
}


// ===== public static bool AMPDAKDDAAB(Vector2 LKFJAPPLGFE, Vector2 OCHLLMNLADJ, float LGLJJDGHBLN = 1E-10)  [RVA 0x3209C64]
// Util$$AMPDAKDDAAB @ RVA 0x3209C64

bool Util__AMPDAKDDAAB(UnityEngine_Vector2_o LKFJAPPLGFE,UnityEngine_Vector2_o OCHLLMNLADJ,
                      float LGLJJDGHBLN,MethodInfo *method)

{
  return ABS(LKFJAPPLGFE.fields.x - OCHLLMNLADJ.fields.x) +
         ABS(LKFJAPPLGFE.fields.y - OCHLLMNLADJ.fields.y) < LGLJJDGHBLN;
}


// ===== public static bool FHNLNKHDADG(float PEOMJHJICCM, float GKBCJOEFFCP, float PKOGACBGAJJ)  [RVA 0x3209C7C]
// Util$$FHNLNKHDADG @ RVA 0x3209C7C

bool Util__FHNLNKHDADG(float PEOMJHJICCM,float GKBCJOEFFCP,float PKOGACBGAJJ,MethodInfo *method)

{
  return PEOMJHJICCM <= PKOGACBGAJJ && PKOGACBGAJJ <= GKBCJOEFFCP;
}


// ===== public static bool NENBPMGDLAL(float IDGIPLNJMEF)  [RVA 0x3209C94]
// Util$$NENBPMGDLAL @ RVA 0x3209C94

bool Util__NENBPMGDLAL(float IDGIPLNJMEF,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (IDGIPLNJMEF <= 1e-05) {
    bVar1 = false;
  }
  else if (0.99999 <= IDGIPLNJMEF) {
    bVar1 = true;
  }
  else {
    fVar2 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
    bVar1 = fVar2 < IDGIPLNJMEF;
  }
  return bVar1;
}


// ===== public static bool DDKIEALPGHP(double CHOCOAGNFDD, double LGLJJDGHBLN = 1.000000013351432E-10)  [RVA 0x3209CF4]
// Util$$DDKIEALPGHP @ RVA 0x3209CF4

bool Util__DDKIEALPGHP(double CHOCOAGNFDD,double LGLJJDGHBLN,MethodInfo *method)

{
  if ((DAT_04566e6a & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566e6a = 1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return ABS(CHOCOAGNFDD) < LGLJJDGHBLN;
}


// ===== public static bool INDMHFLELNN(float CJNHFNHJHPE, float PEOMJHJICCM, float GKBCJOEFFCP)  [RVA 0x3209D5C]
// Util$$INDMHFLELNN @ RVA 0x3209D5C

bool Util__INDMHFLELNN(float CJNHFNHJHPE,float PEOMJHJICCM,float GKBCJOEFFCP,MethodInfo *method)

{
  return PEOMJHJICCM <= CJNHFNHJHPE && CJNHFNHJHPE <= GKBCJOEFFCP;
}


// ===== public static float OGAMEOMFKPD(float MFENNGDJCMF, float CHOCOAGNFDD, float CIGIGIJOFMK, float BLFMJKGBOMI, float KEFILECBPMF, bool JBLDNHFBGCN, Ease GAJONDLDKLI)  [RVA 0x3209D74]
// Util$$OGAMEOMFKPD @ RVA 0x3209D74

float Util__OGAMEOMFKPD(float MFENNGDJCMF,float CHOCOAGNFDD,float CIGIGIJOFMK,float BLFMJKGBOMI,
                       float KEFILECBPMF,bool JBLDNHFBGCN,int32_t GAJONDLDKLI,MethodInfo *method)

{
  float fVar1;
  
  if ((!JBLDNHFBGCN) ||
     ((fVar1 = CHOCOAGNFDD, KEFILECBPMF < BLFMJKGBOMI &&
      (fVar1 = MFENNGDJCMF, CIGIGIJOFMK < KEFILECBPMF)))) {
    if (1e-10 <= ABS(CHOCOAGNFDD - MFENNGDJCMF) + ABS(BLFMJKGBOMI - CIGIGIJOFMK)) {
      fVar1 = NACOPMMCDPO__BCPFPDPICCE
                        ((KEFILECBPMF - CIGIGIJOFMK) / (BLFMJKGBOMI - CIGIGIJOFMK),GAJONDLDKLI,
                         (MethodInfo *)0x0);
      fVar1 = (CHOCOAGNFDD - MFENNGDJCMF) * fVar1 + MFENNGDJCMF;
    }
    else {
      fVar1 = (MFENNGDJCMF + CHOCOAGNFDD) * 0.5;
    }
  }
  return fVar1;
}


// ===== public static bool DJAEMCOEKOI(double CHOCOAGNFDD, double ABJFEGILLJG, double LGLJJDGHBLN = 1.000000013351432E-10)  [RVA 0x3209DFC]
// Util$$DJAEMCOEKOI @ RVA 0x3209DFC

bool Util__DJAEMCOEKOI(double CHOCOAGNFDD,double ABJFEGILLJG,double LGLJJDGHBLN,MethodInfo *method)

{
  if ((DAT_04566e6b & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566e6b = 1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return ABS(CHOCOAGNFDD - ABJFEGILLJG) < LGLJJDGHBLN;
}


// ===== public static string BNIOOKFFIGC(Component MOEOHLPJDJO)  [RVA 0x3209E70]
// Util$$BNIOOKFFIGC @ RVA 0x3209E70

System_String_o * Util__BNIOOKFFIGC(UnityEngine_Component_o *MOEOHLPJDJO,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if (MOEOHLPJDJO != (UnityEngine_Component_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject(MOEOHLPJDJO,(MethodInfo *)0x0);
    pSVar1 = Util__BNIOOKFFIGC(LAIGNDBNBJG,method_00);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void JODGPLBHHIA(GameObject LAIGNDBNBJG, bool LIMKJAFGBOP = False)  [RVA 0x3209E8C]
// Util$$JODGPLBHHIA @ RVA 0x3209E8C

void Util__JODGPLBHHIA(UnityEngine_GameObject_o *LAIGNDBNBJG,bool LIMKJAFGBOP,MethodInfo *method)

{
  if ((DAT_04566e6c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,LIMKJAFGBOP);
    DAT_04566e6c = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Object__Destroy((UnityEngine_Object_o *)LAIGNDBNBJG,(MethodInfo *)0x0);
  if (LAIGNDBNBJG != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void ONIDAJMNLHG(MonoBehaviour IKOLNNDEKFP, bool LIMKJAFGBOP = False)  [RVA 0x3209EFC]
// Util$$ONIDAJMNLHG @ RVA 0x3209EFC

void Util__ONIDAJMNLHG(UnityEngine_MonoBehaviour_o *IKOLNNDEKFP,bool LIMKJAFGBOP,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  if (IKOLNNDEKFP != (UnityEngine_MonoBehaviour_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)IKOLNNDEKFP,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,LIMKJAFGBOP);
}


// ===== public static Vector2 EFCELKPKECC(Vector2 LKFJAPPLGFE, Vector2 OCHLLMNLADJ)  [RVA 0x3209F1C]
// Util$$EFCELKPKECC @ RVA 0x3209F1C

UnityEngine_Vector2_o
Util__EFCELKPKECC(UnityEngine_Vector2_o LKFJAPPLGFE,UnityEngine_Vector2_o OCHLLMNLADJ,
                 MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  UVar1.fields.x = LKFJAPPLGFE.fields.x * OCHLLMNLADJ.fields.x;
  UVar1.fields.y = LKFJAPPLGFE.fields.y * OCHLLMNLADJ.fields.y;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// ===== public static bool BKJNEKOBKED(float CJNHFNHJHPE, float PEOMJHJICCM, float GKBCJOEFFCP)  [RVA 0x3209F28]
// Util$$BKJNEKOBKED @ RVA 0x3209F28

bool Util__BKJNEKOBKED(float CJNHFNHJHPE,float PEOMJHJICCM,float GKBCJOEFFCP,MethodInfo *method)

{
  return PEOMJHJICCM < CJNHFNHJHPE && CJNHFNHJHPE < GKBCJOEFFCP;
}


// ===== public static bool JFJCDAJGFKD(float CHOCOAGNFDD, float ABJFEGILLJG, float LGLJJDGHBLN = 1E-10)  [RVA 0x3209F40]
// Util$$JFJCDAJGFKD @ RVA 0x3209F40

bool Util__JFJCDAJGFKD(float CHOCOAGNFDD,float ABJFEGILLJG,float LGLJJDGHBLN,MethodInfo *method)

{
  return ABS(CHOCOAGNFDD - ABJFEGILLJG) < LGLJJDGHBLN;
}


// ===== public static bool KEJBDHBDGNI(float CHOCOAGNFDD, float LGLJJDGHBLN = 1E-10)  [RVA 0x3209F50]
// Util$$KEJBDHBDGNI @ RVA 0x3209F50

bool Util__KEJBDHBDGNI(float CHOCOAGNFDD,float LGLJJDGHBLN,MethodInfo *method)

{
  return ABS(CHOCOAGNFDD) < LGLJJDGHBLN;
}


// ===== public static int IHCIAJFBPHH(long ELACKBJPMNB)  [RVA 0x3209F60]
// Util$$IHCIAJFBPHH @ RVA 0x3209F60

int32_t Util__IHCIAJFBPHH(int64_t ELACKBJPMNB,MethodInfo *method)

{
  int64_t ELACKBJPMNB_00;
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04566e6d & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566e6d = 1;
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  ELACKBJPMNB_00 = -ELACKBJPMNB;
  if (-1 < ELACKBJPMNB) {
    ELACKBJPMNB_00 = ELACKBJPMNB;
  }
  iVar1 = Util__JPFMDIGLLHB(ELACKBJPMNB_00,method);
  return iVar1;
}


// ===== public static float CHHIJKJEKPN(float FNCFALCANAG)  [RVA 0x3209FB8]
// Util$$CHHIJKJEKPN @ RVA 0x3209FB8

float Util__CHHIJKJEKPN(float FNCFALCANAG,MethodInfo *method)

{
  return FNCFALCANAG * FNCFALCANAG;
}


// ===== public static Vector3 EFCELKPKECC(Vector3 LKFJAPPLGFE, Vector3 OCHLLMNLADJ)  [RVA 0x3209FC0]
// Util$$EFCELKPKECC @ RVA 0x3209FC0

UnityEngine_Vector3_o
Util__EFCELKPKECC(UnityEngine_Vector3_o LKFJAPPLGFE,UnityEngine_Vector3_o OCHLLMNLADJ,
                 MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields.x = LKFJAPPLGFE.fields.x * OCHLLMNLADJ.fields.x;
  UVar1.fields.y = LKFJAPPLGFE.fields.y * OCHLLMNLADJ.fields.y;
  UVar1.fields.z = LKFJAPPLGFE.fields.z * OCHLLMNLADJ.fields.z;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// ===== public static bool AMPDAKDDAAB(Vector3 LKFJAPPLGFE, Vector3 OCHLLMNLADJ, float LGLJJDGHBLN = 1E-10)  [RVA 0x3209FD0]
// Util$$AMPDAKDDAAB @ RVA 0x3209FD0

bool Util__AMPDAKDDAAB(UnityEngine_Vector3_o LKFJAPPLGFE,UnityEngine_Vector3_o OCHLLMNLADJ,
                      float LGLJJDGHBLN,MethodInfo *method)

{
  return ABS(LKFJAPPLGFE.fields.z - OCHLLMNLADJ.fields.z) +
         ABS(LKFJAPPLGFE.fields.x - OCHLLMNLADJ.fields.x) +
         ABS(LKFJAPPLGFE.fields.y - OCHLLMNLADJ.fields.y) < LGLJJDGHBLN;
}


// ===== public static void IHPDCBOFHPA(GameObject CMMIJCJOBBF, bool CJNHFNHJHPE)  [RVA 0x3209FF0]
// Util$$IHPDCBOFHPA @ RVA 0x3209FF0

void Util__IHPDCBOFHPA(UnityEngine_GameObject_o *CMMIJCJOBBF,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  
  if (CMMIJCJOBBF == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(CMMIJCJOBBF,(MethodInfo *)0x0);
  if (bVar1 != CJNHFNHJHPE) {
    UnityEngine_GameObject__SetActive(CMMIJCJOBBF,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public static void JODGPLBHHIA(Component MOEOHLPJDJO, bool LIMKJAFGBOP = False)  [RVA 0x320A040]
// Util$$JODGPLBHHIA @ RVA 0x320A040

void Util__JODGPLBHHIA(UnityEngine_Component_o *MOEOHLPJDJO,bool LIMKJAFGBOP,MethodInfo *method)

{
  if ((DAT_04566e6e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,LIMKJAFGBOP);
    DAT_04566e6e = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Object__Destroy((UnityEngine_Object_o *)MOEOHLPJDJO,(MethodInfo *)0x0);
  return;
}


// ===== public static bool DDGOAPOKLHP(Vector2 OOKEGEFHJJN, Vector2 GONFCLMJCFJ)  [RVA 0x320A098]
// Util$$DDGOAPOKLHP @ RVA 0x320A098

bool Util__DDGOAPOKLHP(UnityEngine_Vector2_o OOKEGEFHJJN,UnityEngine_Vector2_o GONFCLMJCFJ,
                      MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = OOKEGEFHJJN.fields.y;
  fVar1 = OOKEGEFHJJN.fields.x;
  fVar4 = GONFCLMJCFJ.fields.y;
  fVar3 = GONFCLMJCFJ.fields.x;
  if ((fVar3 < fVar1) || (fVar2 < fVar3)) {
    if ((fVar4 < fVar1) || (fVar2 < fVar4 && fVar1 < fVar3)) {
      return fVar3 <= fVar2 && fVar2 <= fVar4;
    }
  }
  return true;
}

