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

