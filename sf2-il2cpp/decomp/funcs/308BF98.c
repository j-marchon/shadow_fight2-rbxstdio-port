// IEFEBEDLHNN$$.ctor @ RVA 0x308BF98

void IEFEBEDLHNN___ctor(IEFEBEDLHNN_o *__this,IEFEBEDLHNN_o *PFKGKBNBGED,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  CNDPAJOLKFN_o **ppCVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_0456605d & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_0456605d = 1;
  }
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).CNMHHKAMGPI;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).BJKKHONDAKP;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (PFKGKBNBGED != (IEFEBEDLHNN_o *)0x0) {
    (__this->fields).NPFMOEOIEKM = (PFKGKBNBGED->fields).NPFMOEOIEKM;
    thunk_FUN_01c20e04();
    (__this->fields).FLDBGCIKMKA = 0;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,0.0,(MethodInfo *)0x0)
    ;
    local_50.fakeValueActive = local_68.fakeValueActive;
    local_50.inited = local_68.inited;
    local_50._18_2_ = local_68._18_2_;
    local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
    local_50.fakeValue = local_68.fakeValue;
    local_50.currentCryptoKey = local_68.currentCryptoKey;
    local_50.hiddenValue = local_68.hiddenValue;
    (__this->fields).DNPEHJEILDN.fields.fakeValueActive = local_68.fakeValueActive;
    (__this->fields).DNPEHJEILDN.fields.inited = local_68.inited;
    *(undefined2 *)&(__this->fields).DNPEHJEILDN.fields.field_0x12 = local_68._18_2_;
    (__this->fields).DNPEHJEILDN.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
    (__this->fields).DNPEHJEILDN.fields.fakeValue = local_68.fakeValue;
    (__this->fields).DNPEHJEILDN.fields.currentCryptoKey = local_68.currentCryptoKey;
    (__this->fields).DNPEHJEILDN.fields.hiddenValue = local_68.hiddenValue;
    (__this->fields).DDMMFMCNPON = 0.0;
    (__this->fields).GAFCPEOANDD = (IEFEBEDLHNN_o *)0x0;
    thunk_FUN_01c20e04(&__this->fields,0);
    (__this->fields).ENFFPGHABFD = false;
    (__this->fields).EKMNMODEKKP = false;
    (__this->fields).MCAILHLELHB = true;
    (__this->fields).NPICHBKFEBF = false;
    (__this->fields).BEGOLMJFLCG = false;
    CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    (__this->fields).MKNHLACCLLP.fields = CVar3;
    IEFEBEDLHNN__KIAOELALKBL(__this,PFKGKBNBGED,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

