// TypeDefIndex 3018
// Namespace: 
// public class NMAHEBEALAB
// Fields:
//   public string PIDNHNODDNO; // 0x10
//   public string IIHFLLPKBJI; // 0x18
//   public string HCCELBFOFPE; // 0x20
//   public string POABJBCJLCD; // 0x28
//   public string DEANFMJLHOO; // 0x30
//   public string EGEHGIEAIJL; // 0x38
//   public bool MHHBEKNAPAN; // 0x40
//   public ObscuredLong IMDBHEPBDOD; // 0x48
//   public long LKENIPBKAJI; // 0x68
//   public long ALLCFABAGOB; // 0x70
//   public bool CKGAMIHJOMC; // 0x78
//   public bool AHMHOFANECC; // 0x79
//   public bool AJKAMFBBAKC; // 0x7A

// ===== public void .ctor(string JHDEDPMNOOJ, string FPOOABJAJBA, long GOKKDGLPFPJ, long NDGGMHBHDDH = 0, string OPEAOILBFEC = "", string OAFGMHOFEKM = "", long AJHEFMAHEFI = 0, bool HOHPPNGCBHN = False, bool MMKNJBOMOEH = False, bool HJDCPNOEFAK = False)  [RVA 0x34B1314]
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
    FUN_01bab630(&StringLiteral_1/*""*/);
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
  (__this->fields).EGEHGIEAIJL = StringLiteral_1/*""*/;
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
  *ppSVar1 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar1);
  return;
}


// ===== public void .ctor(NMAHEBEALAB DLBFLPBOJNI)  [RVA 0x34B146C]
// NMAHEBEALAB$$.ctor @ RVA 0x34B146C

void NMAHEBEALAB___ctor(NMAHEBEALAB_o *__this,NMAHEBEALAB_o *DLBFLPBOJNI,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined6 uVar2;
  System_String_o **ppSVar3;
  int64_t iVar4;
  int64_t iVar5;
  int64_t iVar6;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (DLBFLPBOJNI != (NMAHEBEALAB_o *)0x0) {
    (__this->fields).PIDNHNODDNO = (DLBFLPBOJNI->fields).PIDNHNODDNO;
    thunk_FUN_01c20e04();
    (__this->fields).IIHFLLPKBJI = (DLBFLPBOJNI->fields).IIHFLLPKBJI;
    thunk_FUN_01c20e04();
    (__this->fields).ALLCFABAGOB = (DLBFLPBOJNI->fields).ALLCFABAGOB;
    (__this->fields).CKGAMIHJOMC = (DLBFLPBOJNI->fields).CKGAMIHJOMC;
    (__this->fields).EGEHGIEAIJL = (DLBFLPBOJNI->fields).EGEHGIEAIJL;
    thunk_FUN_01c20e04();
    bVar1 = (DLBFLPBOJNI->fields).IMDBHEPBDOD.fields.inited;
    uVar2 = *(undefined6 *)&(DLBFLPBOJNI->fields).IMDBHEPBDOD.fields.field_0x1a;
    iVar4 = (DLBFLPBOJNI->fields).IMDBHEPBDOD.fields.fakeValue;
    iVar6 = (DLBFLPBOJNI->fields).IMDBHEPBDOD.fields.hiddenValue;
    iVar5 = (DLBFLPBOJNI->fields).IMDBHEPBDOD.fields.currentCryptoKey;
    (__this->fields).IMDBHEPBDOD.fields.fakeValueActive =
         (DLBFLPBOJNI->fields).IMDBHEPBDOD.fields.fakeValueActive;
    (__this->fields).IMDBHEPBDOD.fields.inited = bVar1;
    *(undefined6 *)&(__this->fields).IMDBHEPBDOD.fields.field_0x1a = uVar2;
    (__this->fields).IMDBHEPBDOD.fields.fakeValue = iVar4;
    (__this->fields).IMDBHEPBDOD.fields.hiddenValue = iVar6;
    (__this->fields).IMDBHEPBDOD.fields.currentCryptoKey = iVar5;
    (__this->fields).LKENIPBKAJI = (DLBFLPBOJNI->fields).LKENIPBKAJI;
    (__this->fields).AHMHOFANECC = (DLBFLPBOJNI->fields).AHMHOFANECC;
    (__this->fields).MHHBEKNAPAN = (DLBFLPBOJNI->fields).MHHBEKNAPAN;
    (__this->fields).AJKAMFBBAKC = (DLBFLPBOJNI->fields).AJKAMFBBAKC;
    (__this->fields).HCCELBFOFPE = (DLBFLPBOJNI->fields).HCCELBFOFPE;
    thunk_FUN_01c20e04();
    (__this->fields).POABJBCJLCD = (DLBFLPBOJNI->fields).POABJBCJLCD;
    thunk_FUN_01c20e04();
    ppSVar3 = &(__this->fields).DEANFMJLHOO;
    *ppSVar3 = (DLBFLPBOJNI->fields).DEANFMJLHOO;
    thunk_FUN_01c20e04(ppSVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

