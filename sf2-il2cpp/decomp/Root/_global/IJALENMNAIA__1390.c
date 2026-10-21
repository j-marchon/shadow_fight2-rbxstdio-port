// TypeDefIndex 1390
// Namespace: 
// public class IJALENMNAIA : NOCMDCMLGPN
// Fields:

// ===== public void .ctor()  [RVA 0x3174144]
// IJALENMNAIA$$.ctor @ RVA 0x3174144

void IJALENMNAIA___ctor(IJALENMNAIA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void BLPABBKBKDK(Action BLMFLPJJMPF)  [RVA 0x317414C]
// IJALENMNAIA$$BLPABBKBKDK @ RVA 0x317414C

void IJALENMNAIA__BLPABBKBKDK(IJALENMNAIA_o *__this,System_Action_o *BLMFLPJJMPF,MethodInfo *method)

{
  if (BLMFLPJJMPF != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0327415c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
              ((BLMFLPJJMPF->fields).super.super.method_code,
               (BLMFLPJJMPF->fields).super.super.method);
    return;
  }
  return;
}


// ===== private static void JHEIGLGFONB(string NONPLOOOOAG = "", string JJBPCFGELPO = "")  [RVA 0x3174164]
// IJALENMNAIA$$JHEIGLGFONB @ RVA 0x3174164

void IJALENMNAIA__JHEIGLGFONB
               (System_String_o *NONPLOOOOAG,System_String_o *JJBPCFGELPO,MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_0456694a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    FUN_01bab630(&StringLiteral_15415/*"[ATTHandler] "*/);
    DAT_0456694a = 1;
  }
  message = System_String__Concat
                      (StringLiteral_15415/*"[ATTHandler] "*/,JJBPCFGELPO,StringLiteral_2088/*": "*/,NONPLOOOOAG,
                       (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== public bool JIIJDOPBGAN()  [RVA 0x3174218]
// IJALENMNAIA$$JIIJDOPBGAN @ RVA 0x3174218

bool IJALENMNAIA__JIIJDOPBGAN(IJALENMNAIA_o *__this,MethodInfo *method)

{
  return false;
}

