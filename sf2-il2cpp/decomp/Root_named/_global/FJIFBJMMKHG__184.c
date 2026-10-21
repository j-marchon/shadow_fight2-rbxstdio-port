// TypeDefIndex 184
// Namespace: 
// public class FJIFBJMMKHG : CABNDLLKIEL
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private long <HFPMLGFDOKC>k__BackingField; // 0x18
//   private long <HOPNFPNDDEB>k__BackingField; // 0x20
//   private long <CNDCJMDGDMK>k__BackingField; // 0x28
//   private long <PKHKGBAKJDF>k__BackingField; // 0x30
//   private int <FNACGIPLEJC>k__BackingField; // 0x38
//   private int <IAEGOLJCOIB>k__BackingField; // 0x3C
//   private string <CIEBCKIBJHL>k__BackingField; // 0x40
//   private string <NACCGICEMJN>k__BackingField; // 0x48
//   private string <DGKHEMIDIFL>k__BackingField; // 0x50
//   private string <FMMDBOOCNJO>k__BackingField; // 0x58
//   private string <AKGMKMOIELO>k__BackingField; // 0x60
//   private string <PBKJNFIKPOM>k__BackingField; // 0x68
//   private string <BMEHGOBKKFI>k__BackingField; // 0x70
//   private string <PEGBMAEONOE>k__BackingField; // 0x78
//   private string <AFGBGDNBOLL>k__BackingField; // 0x80
//   private string <FAJAJIGDEKC>k__BackingField; // 0x88
//   private List<int> <FJCAMFHOJBB>k__BackingField; // 0x90
//   private bool <ALFMMIOFEAN>k__BackingField; // 0x98
//   private bool <DIDFGKLCHLK>k__BackingField; // 0x99

// ===== public void HFIOGBENCMO(string CJNHFNHJHPE)  [RVA 0x3113534]
// FJIFBJMMKHG$$HFIOGBENCMO @ RVA 0x3113534

void FJIFBJMMKHG__HFIOGBENCMO(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FMMDBOOCNJO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void HIDAJKBONAL(string CJNHFNHJHPE)  [RVA 0x311353C]
// FJIFBJMMKHG$$HIDAJKBONAL @ RVA 0x311353C

void FJIFBJMMKHG__HIDAJKBONAL(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CIEBCKIBJHL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string MALPGCALHNK()  [RVA 0x3113544]
// FJIFBJMMKHG$$MALPGCALHNK @ RVA 0x3113544

System_String_o * FJIFBJMMKHG__MALPGCALHNK(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._PBKJNFIKPOM_k__BackingField;
}


// ===== public void HGBMENBEEFG(long CJNHFNHJHPE)  [RVA 0x311354C]
// FJIFBJMMKHG$$HGBMENBEEFG @ RVA 0x311354C

void FJIFBJMMKHG__HGBMENBEEFG(FJIFBJMMKHG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HOPNFPNDDEB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void HHHMBLEHMEB(string CJNHFNHJHPE)  [RVA 0x3113554]
// FJIFBJMMKHG$$HHHMBLEHMEB @ RVA 0x3113554

void FJIFBJMMKHG__HHHMBLEHMEB(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FAJAJIGDEKC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x311355C]
// FJIFBJMMKHG$$KCHJCGEMCGE @ RVA 0x311355C

System_String_o * FJIFBJMMKHG__KCHJCGEMCGE(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public bool HOJCCLPEMNM()  [RVA 0x3113564]
// FJIFBJMMKHG$$HOJCCLPEMNM @ RVA 0x3113564

bool FJIFBJMMKHG__HOJCCLPEMNM(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_GlobalTimer_o *__this_00;
  int64_t iVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  long lVar4;
  
  if ((DAT_04566598 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04566598 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._PKHKGBAKJDF_k__BackingField < 1) {
    bVar1 = false;
  }
  else {
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
    }
    __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_Utils_GlobalTimer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = Nekki_Utils_GlobalTimer__GetTime(__this_00,(MethodInfo *)0x0);
    lVar4 = (__this->fields)._PKHKGBAKJDF_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar3 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    bVar1 = iVar2 < iVar3 + lVar4;
  }
  return bVar1;
}


// ===== public string MIOCPMMAEJE()  [RVA 0x3113624]
// FJIFBJMMKHG$$MIOCPMMAEJE @ RVA 0x3113624

System_String_o * FJIFBJMMKHG__MIOCPMMAEJE(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._AFGBGDNBOLL_k__BackingField;
}


// ===== public void MBAAEPBKPNF(string CJNHFNHJHPE)  [RVA 0x311362C]
// FJIFBJMMKHG$$MBAAEPBKPNF @ RVA 0x311362C

void FJIFBJMMKHG__MBAAEPBKPNF(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._NACCGICEMJN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void LANKKCHHMIN(int CJNHFNHJHPE)  [RVA 0x3113634]
// FJIFBJMMKHG$$LANKKCHHMIN @ RVA 0x3113634

void FJIFBJMMKHG__LANKKCHHMIN(FJIFBJMMKHG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FNACGIPLEJC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void NMFHCNLEIGF(int CJNHFNHJHPE)  [RVA 0x311363C]
// FJIFBJMMKHG$$NMFHCNLEIGF @ RVA 0x311363C

void FJIFBJMMKHG__NMFHCNLEIGF(FJIFBJMMKHG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IAEGOLJCOIB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public override string ToString()  [RVA 0x3113644]
// FJIFBJMMKHG$$ToString @ RVA 0x3113644

System_String_o * FJIFBJMMKHG__ToString(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566599 & 1) == 0) {
    FUN_01bab630(&StringLiteral_255/*" : "*/);
    DAT_04566599 = 1;
  }
  pSVar1 = System_String__Concat
                     ((__this->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_255/*" : "*/,
                      (__this->fields)._CIEBCKIBJHL_k__BackingField,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void HONNLNIEELE(string CJNHFNHJHPE)  [RVA 0x3113694]
// FJIFBJMMKHG$$HONNLNIEELE @ RVA 0x3113694

void FJIFBJMMKHG__HONNLNIEELE(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PBKJNFIKPOM_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public long EGCHPOOCGPG()  [RVA 0x311369C]
// FJIFBJMMKHG$$EGCHPOOCGPG @ RVA 0x311369C

int64_t FJIFBJMMKHG__EGCHPOOCGPG(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._CNDCJMDGDMK_k__BackingField;
}


// ===== public string IAOMPKHPGGE()  [RVA 0x31136A4]
// FJIFBJMMKHG$$IAOMPKHPGGE @ RVA 0x31136A4

System_String_o * FJIFBJMMKHG__IAOMPKHPGGE(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._NACCGICEMJN_k__BackingField;
}


// ===== public void PELENLPONBN(string CJNHFNHJHPE)  [RVA 0x31136AC]
// FJIFBJMMKHG$$PELENLPONBN @ RVA 0x31136AC

void FJIFBJMMKHG__PELENLPONBN(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AFGBGDNBOLL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void JOJIIFABKGM(string CJNHFNHJHPE)  [RVA 0x31136B4]
// FJIFBJMMKHG$$JOJIIFABKGM @ RVA 0x31136B4

void FJIFBJMMKHG__JOJIIFABKGM(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AKGMKMOIELO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public long JFNLFBGHKPL()  [RVA 0x31136BC]
// FJIFBJMMKHG$$JFNLFBGHKPL @ RVA 0x31136BC

int64_t FJIFBJMMKHG__JFNLFBGHKPL(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  bool bVar1;
  int64_t *piVar2;
  
  piVar2 = &(__this->fields)._HOPNFPNDDEB_k__BackingField;
  if ((*piVar2 < 1) || (bVar1 = FJIFBJMMKHG__HOJCCLPEMNM(__this,method), !bVar1)) {
    piVar2 = &(__this->fields)._HFPMLGFDOKC_k__BackingField;
  }
  return *piVar2;
}


// ===== public List<int> NKOKDNFIKOL()  [RVA 0x31136F8]
// FJIFBJMMKHG$$NKOKDNFIKOL @ RVA 0x31136F8

System_Collections_Generic_List_int__o *
FJIFBJMMKHG__NKOKDNFIKOL(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._FJCAMFHOJBB_k__BackingField;
}


// ===== public bool DDCAHCAGOOC()  [RVA 0x3113700]
// FJIFBJMMKHG$$DDCAHCAGOOC @ RVA 0x3113700

bool FJIFBJMMKHG__DDCAHCAGOOC(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._ALFMMIOFEAN_k__BackingField;
}


// ===== public long HGHNCLCPJDE()  [RVA 0x3113708]
// FJIFBJMMKHG$$HGHNCLCPJDE @ RVA 0x3113708

int64_t FJIFBJMMKHG__HGHNCLCPJDE(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._PKHKGBAKJDF_k__BackingField;
}


// ===== public string DMHIKAEIGCJ()  [RVA 0x3113710]
// FJIFBJMMKHG$$DMHIKAEIGCJ @ RVA 0x3113710

System_String_o * FJIFBJMMKHG__DMHIKAEIGCJ(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  System_String_o **ppSVar2;
  
  ppSVar2 = &(__this->fields)._FMMDBOOCNJO_k__BackingField;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar2,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = FJIFBJMMKHG__HOJCCLPEMNM(__this,method_00), !bVar1)) {
    ppSVar2 = &(__this->fields)._DGKHEMIDIFL_k__BackingField;
  }
  return *ppSVar2;
}


// ===== public int FBEGAFFGGNC()  [RVA 0x3113750]
// FJIFBJMMKHG$$FBEGAFFGGNC @ RVA 0x3113750

int32_t FJIFBJMMKHG__FBEGAFFGGNC(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._IAEGOLJCOIB_k__BackingField;
}


// ===== public int JDCGKEGGHPK()  [RVA 0x3113758]
// FJIFBJMMKHG$$JDCGKEGGHPK @ RVA 0x3113758

int32_t FJIFBJMMKHG__JDCGKEGGHPK(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._FNACGIPLEJC_k__BackingField;
}


// ===== public void AAPNGMDCCND(string CJNHFNHJHPE)  [RVA 0x3113760]
// FJIFBJMMKHG$$AAPNGMDCCND @ RVA 0x3113760

void FJIFBJMMKHG__AAPNGMDCCND(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DGKHEMIDIFL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void FEMCBOCEJHM(string CJNHFNHJHPE)  [RVA 0x3113768]
// FJIFBJMMKHG$$FEMCBOCEJHM @ RVA 0x3113768

void FJIFBJMMKHG__FEMCBOCEJHM(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BMEHGOBKKFI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string POPKEOBLJHN()  [RVA 0x3113770]
// FJIFBJMMKHG$$POPKEOBLJHN @ RVA 0x3113770

System_String_o * FJIFBJMMKHG__POPKEOBLJHN(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._FMMDBOOCNJO_k__BackingField;
}


// ===== public string KLDODCPPMGK()  [RVA 0x3113778]
// FJIFBJMMKHG$$KLDODCPPMGK @ RVA 0x3113778

System_String_o * FJIFBJMMKHG__KLDODCPPMGK(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._AKGMKMOIELO_k__BackingField;
}


// ===== public string GBCOCIMIACD()  [RVA 0x3113780]
// FJIFBJMMKHG$$GBCOCIMIACD @ RVA 0x3113780

System_String_o * FJIFBJMMKHG__GBCOCIMIACD(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._BMEHGOBKKFI_k__BackingField;
}


// ===== public long DGOEDGMGAHF()  [RVA 0x3113788]
// FJIFBJMMKHG$$DGOEDGMGAHF @ RVA 0x3113788

int64_t FJIFBJMMKHG__DGOEDGMGAHF(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._HFPMLGFDOKC_k__BackingField;
}


// ===== public void ABIKDJCCGJF(long CJNHFNHJHPE)  [RVA 0x3113790]
// FJIFBJMMKHG$$ABIKDJCCGJF @ RVA 0x3113790

void FJIFBJMMKHG__ABIKDJCCGJF(FJIFBJMMKHG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HFPMLGFDOKC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public string DHKPNIGECON()  [RVA 0x3113798]
// FJIFBJMMKHG$$DHKPNIGECON @ RVA 0x3113798

System_String_o * FJIFBJMMKHG__DHKPNIGECON(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._CIEBCKIBJHL_k__BackingField;
}


// ===== public string BDLLNKGJNJB()  [RVA 0x31137A0]
// FJIFBJMMKHG$$BDLLNKGJNJB @ RVA 0x31137A0

System_String_o * FJIFBJMMKHG__BDLLNKGJNJB(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._PEGBMAEONOE_k__BackingField;
}


// ===== public string ONKCKABCHID()  [RVA 0x31137A8]
// FJIFBJMMKHG$$ONKCKABCHID @ RVA 0x31137A8

System_String_o * FJIFBJMMKHG__ONKCKABCHID(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._FAJAJIGDEKC_k__BackingField;
}


// ===== public void JNAOOJBGOAH(string CJNHFNHJHPE)  [RVA 0x31137B0]
// FJIFBJMMKHG$$JNAOOJBGOAH @ RVA 0x31137B0

void FJIFBJMMKHG__JNAOOJBGOAH(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PEGBMAEONOE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string DPEKAKHBPPO()  [RVA 0x31137B8]
// FJIFBJMMKHG$$DPEKAKHBPPO @ RVA 0x31137B8

System_String_o * FJIFBJMMKHG__DPEKAKHBPPO(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._DGKHEMIDIFL_k__BackingField;
}


// ===== public void KOJDLGGKDKP(bool CJNHFNHJHPE)  [RVA 0x31137C0]
// FJIFBJMMKHG$$KOJDLGGKDKP @ RVA 0x31137C0

void FJIFBJMMKHG__KOJDLGGKDKP(FJIFBJMMKHG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ALFMMIOFEAN_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x31137CC]
// FJIFBJMMKHG$$.ctor @ RVA 0x31137CC

void FJIFBJMMKHG___ctor(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_int__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456659a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_0456659a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar1 = &(__this->fields)._FJCAMFHOJBB_k__BackingField;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields)._DIDFGKLCHLK_k__BackingField = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool NIGKCIHAAFH()  [RVA 0x311385C]
// FJIFBJMMKHG$$NIGKCIHAAFH @ RVA 0x311385C

bool FJIFBJMMKHG__NIGKCIHAAFH(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._DIDFGKLCHLK_k__BackingField;
}


// ===== public long DNNJFNFCLCG()  [RVA 0x3113864]
// FJIFBJMMKHG$$DNNJFNFCLCG @ RVA 0x3113864

int64_t FJIFBJMMKHG__DNNJFNFCLCG(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._HOPNFPNDDEB_k__BackingField;
}


// ===== public void PDDNJDDAPNJ(long CJNHFNHJHPE)  [RVA 0x311386C]
// FJIFBJMMKHG$$PDDNJDDAPNJ @ RVA 0x311386C

void FJIFBJMMKHG__PDDNJDDAPNJ(FJIFBJMMKHG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PKHKGBAKJDF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3113874]
// FJIFBJMMKHG$$HCOCAAIGNNL @ RVA 0x3113874

void FJIFBJMMKHG__HCOCAAIGNNL(FJIFBJMMKHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void DHAAGKPHJLA(StringBuilder KHHGPLOMHBB, string MIICONGNBOI = "\n")  [RVA 0x311387C]
// FJIFBJMMKHG$$DHAAGKPHJLA @ RVA 0x311387C

void FJIFBJMMKHG__DHAAGKPHJLA
               (FJIFBJMMKHG_o *__this,System_Text_StringBuilder_o *KHHGPLOMHBB,
               System_String_o *MIICONGNBOI,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_0456659b & 1) == 0) {
    FUN_01bab630(&Method_FJIFBJMMKHG_DHAAGKPHJLA<long>__);
    FUN_01bab630(&Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
    FUN_01bab630(&Method_System_String_Join<int>__);
    FUN_01bab630(&StringLiteral_6929/*"GroupId"*/);
    FUN_01bab630(&StringLiteral_10454/*"Price"*/);
    FUN_01bab630(&StringLiteral_10487/*"ProductId"*/);
    FUN_01bab630(&StringLiteral_5750/*"EndTime"*/);
    FUN_01bab630(&StringLiteral_2855/*"Amount"*/);
    FUN_01bab630(&StringLiteral_12122/*"Sign"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_9404/*"NewAmount"*/);
    FUN_01bab630(&StringLiteral_1155/*", "*/);
    FUN_01bab630(&StringLiteral_9415/*"NewPrice"*/);
    FUN_01bab630(&StringLiteral_14646/*"UserSpenderGroup"*/);
    FUN_01bab630(&StringLiteral_12374/*"StartTime"*/);
    FUN_01bab630(&StringLiteral_9416/*"NewProductId"*/);
    FUN_01bab630(&StringLiteral_12123/*"SignCode"*/);
    DAT_0456659b = 1;
  }
  FJIFBJMMKHG__DHAAGKPHJLA<object>
            (__this,KHHGPLOMHBB,StringLiteral_9327/*"Name"*/,
             (Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,MIICONGNBOI,
             Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
  FJIFBJMMKHG__DHAAGKPHJLA<long>
            (__this,KHHGPLOMHBB,StringLiteral_2855/*"Amount"*/,(__this->fields)._HFPMLGFDOKC_k__BackingField,
             MIICONGNBOI,Method_FJIFBJMMKHG_DHAAGKPHJLA<long>__);
  FJIFBJMMKHG__DHAAGKPHJLA<long>
            (__this,KHHGPLOMHBB,StringLiteral_9404/*"NewAmount"*/,(__this->fields)._HOPNFPNDDEB_k__BackingField,
             MIICONGNBOI,Method_FJIFBJMMKHG_DHAAGKPHJLA<long>__);
  FJIFBJMMKHG__DHAAGKPHJLA<long>
            (__this,KHHGPLOMHBB,StringLiteral_12374/*"StartTime"*/,(__this->fields)._CNDCJMDGDMK_k__BackingField,
             MIICONGNBOI,Method_FJIFBJMMKHG_DHAAGKPHJLA<long>__);
  FJIFBJMMKHG__DHAAGKPHJLA<long>
            (__this,KHHGPLOMHBB,StringLiteral_5750/*"EndTime"*/,(__this->fields)._PKHKGBAKJDF_k__BackingField,
             MIICONGNBOI,Method_FJIFBJMMKHG_DHAAGKPHJLA<long>__);
  FJIFBJMMKHG__DHAAGKPHJLA<object>
            (__this,KHHGPLOMHBB,StringLiteral_10487/*"ProductId"*/,
             (Il2CppObject *)(__this->fields)._CIEBCKIBJHL_k__BackingField,MIICONGNBOI,
             Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
  FJIFBJMMKHG__DHAAGKPHJLA<object>
            (__this,KHHGPLOMHBB,StringLiteral_9416/*"NewProductId"*/,
             (Il2CppObject *)(__this->fields)._NACCGICEMJN_k__BackingField,MIICONGNBOI,
             Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
  FJIFBJMMKHG__DHAAGKPHJLA<object>
            (__this,KHHGPLOMHBB,StringLiteral_10454/*"Price"*/,
             (Il2CppObject *)(__this->fields)._DGKHEMIDIFL_k__BackingField,MIICONGNBOI,
             Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
  FJIFBJMMKHG__DHAAGKPHJLA<object>
            (__this,KHHGPLOMHBB,StringLiteral_9415/*"NewPrice"*/,
             (Il2CppObject *)(__this->fields)._FMMDBOOCNJO_k__BackingField,MIICONGNBOI,
             Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
  FJIFBJMMKHG__DHAAGKPHJLA<object>
            (__this,KHHGPLOMHBB,StringLiteral_12122/*"Sign"*/,
             (Il2CppObject *)(__this->fields)._PBKJNFIKPOM_k__BackingField,MIICONGNBOI,
             Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
  FJIFBJMMKHG__DHAAGKPHJLA<object>
            (__this,KHHGPLOMHBB,StringLiteral_12123/*"SignCode"*/,
             (Il2CppObject *)(__this->fields)._BMEHGOBKKFI_k__BackingField,MIICONGNBOI,
             Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
  FJIFBJMMKHG__DHAAGKPHJLA<object>
            (__this,KHHGPLOMHBB,StringLiteral_6929/*"GroupId"*/,
             (Il2CppObject *)(__this->fields)._PEGBMAEONOE_k__BackingField,MIICONGNBOI,
             Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
  CJNHFNHJHPE = System_String__Join<int>
                          (StringLiteral_1155/*", "*/,
                           (System_Collections_Generic_IEnumerable_T__o *)
                           (__this->fields)._FJCAMFHOJBB_k__BackingField,
                           Method_System_String_Join<int>__);
  FJIFBJMMKHG__DHAAGKPHJLA<object>
            (__this,KHHGPLOMHBB,StringLiteral_14646/*"UserSpenderGroup"*/,(Il2CppObject *)CJNHFNHJHPE,MIICONGNBOI,
             Method_FJIFBJMMKHG_DHAAGKPHJLA<string>__);
  return;
}


// ===== public void MGALHCGHPNO(long CJNHFNHJHPE)  [RVA 0x3113B9C]
// FJIFBJMMKHG$$MGALHCGHPNO @ RVA 0x3113B9C

void FJIFBJMMKHG__MGALHCGHPNO(FJIFBJMMKHG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CNDCJMDGDMK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void CFGEDNNEALM(List<int> CJNHFNHJHPE)  [RVA 0x3113BA4]
// FJIFBJMMKHG$$CFGEDNNEALM @ RVA 0x3113BA4

void FJIFBJMMKHG__CFGEDNNEALM
               (FJIFBJMMKHG_o *__this,System_Collections_Generic_List_int__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._FJCAMFHOJBB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void GOEEGCGLADH(bool CJNHFNHJHPE)  [RVA 0x3113BAC]
// FJIFBJMMKHG$$GOEEGCGLADH @ RVA 0x3113BAC

void FJIFBJMMKHG__GOEEGCGLADH(FJIFBJMMKHG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DIDFGKLCHLK_k__BackingField = CJNHFNHJHPE;
  return;
}

