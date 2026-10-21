// NMAHEBEALAB$$.ctor @ RVA 0x34B1314

void NMAHEBEALAB___ctor(NMAHEBEALAB_o *__this,System_String_o *JHDEDPMNOOJ,
                       System_String_o *FPOOABJAJBA,int64_t GOKKDGLPFPJ,int64_t NDGGMHBHDDH,
                       System_String_o *OPEAOILBFEC,System_String_o *OAFGMHOFEKM,int64_t AJHEFMAHEFI
                       ,bool HOHPPNGCBHN,bool MMKNJBOMOEH,bool HJDCPNOEFAK,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  int64_t local_80;
  int64_t iStack_78;
  int64_t iStack_70;
  bool_conflict bStack_68;
  bool_conflict bStack_67;
  undefined6 uStack_66;
  
  if ((DAT_0456855f & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_0456855f = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PIDNHNODDNO = FPOOABJAJBA;
  thunk_FUN_01c20e04(&__this->fields,FPOOABJAJBA);
  ppSVar1 = &(__this->fields).IIHFLLPKBJI;
  *ppSVar1 = JHDEDPMNOOJ;
  thunk_FUN_01c20e04(ppSVar1,JHDEDPMNOOJ);
  (__this->fields).CKGAMIHJOMC = true;
  (__this->fields).ALLCFABAGOB = GOKKDGLPFPJ;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_a0,NDGGMHBHDDH,(MethodInfo *)0x0);
  iStack_78 = local_a0.fields.hiddenValue;
  local_80 = local_a0.fields.currentCryptoKey;
  bStack_68 = local_a0.fields.fakeValueActive;
  bStack_67 = local_a0.fields.inited;
  uStack_66 = local_a0.fields._26_6_;
  iStack_70 = local_a0.fields.fakeValue;
  (__this->fields).IMDBHEPBDOD.fields.fakeValueActive = local_a0.fields.fakeValueActive;
  (__this->fields).IMDBHEPBDOD.fields.inited = local_a0.fields.inited;
  *(undefined6 *)&(__this->fields).IMDBHEPBDOD.fields.field_0x1a = local_a0.fields._26_6_;
  (__this->fields).IMDBHEPBDOD.fields.fakeValue = local_a0.fields.fakeValue;
  (__this->fields).IMDBHEPBDOD.fields.hiddenValue = local_a0.fields.hiddenValue;
  (__this->fields).IMDBHEPBDOD.fields.currentCryptoKey = local_a0.fields.currentCryptoKey;
  (__this->fields).EGEHGIEAIJL = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).LKENIPBKAJI = AJHEFMAHEFI;
  (__this->fields).AHMHOFANECC = HOHPPNGCBHN;
  (__this->fields).MHHBEKNAPAN = MMKNJBOMOEH;
  (__this->fields).AJKAMFBBAKC = HJDCPNOEFAK;
  pSVar2 = System_String__Concat(OAFGMHOFEKM,OPEAOILBFEC,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).HCCELBFOFPE;
  *ppSVar1 = pSVar2;
  thunk_FUN_01c20e04(ppSVar1,pSVar2);
  (__this->fields).POABJBCJLCD = *ppSVar1;
  thunk_FUN_01c20e04();
  ppSVar1 = &(__this->fields).DEANFMJLHOO;
  *ppSVar1 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar1);
  return;
}

