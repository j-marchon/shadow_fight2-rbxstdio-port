// TypeDefIndex 1344
// Namespace: 
// public static class ODHJHIDPCKF
// Fields:

// ===== public static string ENODLDLNFKI(object PCMFDDODKED, bool PLDMBNAKDKF = False)  [RVA 0x3162E3C]
// ODHJHIDPCKF$$ENODLDLNFKI @ RVA 0x3162E3C

System_String_o *
ODHJHIDPCKF__ENODLDLNFKI(Il2CppObject *PCMFDDODKED,bool PLDMBNAKDKF,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_0456688f & 1) == 0) {
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    DAT_0456688f = 1;
  }
  if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = Newtonsoft_Json_JsonConvert__SerializeObject
                     (PCMFDDODKED,(uint)PLDMBNAKDKF,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static void DHAAGKPHJLA(object PCMFDDODKED)  [RVA 0x3162FAC]
// ODHJHIDPCKF$$DHAAGKPHJLA @ RVA 0x3162FAC

void ODHJHIDPCKF__DHAAGKPHJLA(Il2CppObject *PCMFDDODKED,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566890 & 1) == 0) {
    FUN_01bab630(&ODHJHIDPCKF_var);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_8607/*"Log:\n"*/);
    DAT_04566890 = 1;
    method = extraout_x1;
  }
  FUN_03f93600((System_Type_TypeInfo->_2).cctor_finished,System_Type_TypeInfo,method);
  return;
}

