// TypeDefIndex 1522
// Namespace: 
// [CompilerGenerated]
// private sealed class AHHELIMMIED.MBPENHMOBNJ
// Fields:
//   public int port; // 0x10

// ===== internal string EHPIOCDLNEM(string address)  [RVA 0x319F924]
// AHHELIMMIED.MBPENHMOBNJ$$EHPIOCDLNEM @ RVA 0x319F924

System_String_o *
AHHELIMMIED_MBPENHMOBNJ__EHPIOCDLNEM
          (AHHELIMMIED_MBPENHMOBNJ_o *__this,System_String_o *address,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  int32_t local_34;
  
  if ((DAT_04566ad5 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_18858/*"http://{0}:{1}/"*/);
    DAT_04566ad5 = 1;
  }
  local_34 = (__this->fields).port;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  pSVar1 = System_String__Format(StringLiteral_18858/*"http://{0}:{1}/"*/,(Il2CppObject *)address,arg1,(MethodInfo *)0x0)
  ;
                    /* try { // try from 0329f9b0 to 0339f9cf has its CatchHandler @ 0329fb08 */
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x319F6AC]
// AHHELIMMIED.MBPENHMOBNJ$$.ctor @ RVA 0x319F6AC

void AHHELIMMIED_MBPENHMOBNJ___ctor(AHHELIMMIED_MBPENHMOBNJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

