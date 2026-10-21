// TypeDefIndex 1087
// Namespace: 
// public class BCOICIIDFPD
// Fields:
//   private MCCHIAKPFEL <BLIMDANKDIH>k__BackingField; // 0x10
//   private int <HFPMLGFDOKC>k__BackingField; // 0x18
//   private string <IANGGJCONIH>k__BackingField; // 0x20
//   private string <JHGGGMJEENP>k__BackingField; // 0x28
//   private BCOICIIDFPD.GIGJJDKLIJP <FOBKGCDONOI>k__BackingField; // 0x30
//   private string <COIPKAKHDFP>k__BackingField; // 0x38
//   private bool <GDKBFEGNHNP>k__BackingField; // 0x40
//   protected int HMHEEKFFCPL; // 0x44
//   protected int EHOFCENCPNF; // 0x48

// ===== public MCCHIAKPFEL FGMGOKNGJFJ()  [RVA 0x30E0BA8]
// BCOICIIDFPD$$FGMGOKNGJFJ @ RVA 0x30E0BA8

MCCHIAKPFEL_o * BCOICIIDFPD__FGMGOKNGJFJ(BCOICIIDFPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._BLIMDANKDIH_k__BackingField;
}


// ===== protected void AKCOGFAAFDK(string CJNHFNHJHPE)  [RVA 0x30E0BB0]
// BCOICIIDFPD$$AKCOGFAAFDK @ RVA 0x30E0BB0

void BCOICIIDFPD__AKCOGFAAFDK(BCOICIIDFPD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JHGGGMJEENP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public BCOICIIDFPD.GIGJJDKLIJP GLAOMEOOINB()  [RVA 0x30E0BB8]
// BCOICIIDFPD$$GLAOMEOOINB @ RVA 0x30E0BB8

int32_t BCOICIIDFPD__GLAOMEOOINB(BCOICIIDFPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._FOBKGCDONOI_k__BackingField;
}


// ===== public int DGOEDGMGAHF()  [RVA 0x30E0BC0]
// BCOICIIDFPD$$DGOEDGMGAHF @ RVA 0x30E0BC0

int32_t BCOICIIDFPD__DGOEDGMGAHF(BCOICIIDFPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._HFPMLGFDOKC_k__BackingField;
}


// ===== public string KEKOFLIENFP()  [RVA 0x30E0BC8]
// BCOICIIDFPD$$KEKOFLIENFP @ RVA 0x30E0BC8

System_String_o * BCOICIIDFPD__KEKOFLIENFP(BCOICIIDFPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._IANGGJCONIH_k__BackingField;
}


// ===== protected void AMPKCBIIHPA(BCOICIIDFPD.GIGJJDKLIJP CJNHFNHJHPE)  [RVA 0x30E0BD0]
// BCOICIIDFPD$$AMPKCBIIHPA @ RVA 0x30E0BD0

void BCOICIIDFPD__AMPKCBIIHPA(BCOICIIDFPD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FOBKGCDONOI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor(GameUtils.OPCJEEFOCFB IMMNELPBGIF)  [RVA 0x30E0BD8]
// BCOICIIDFPD$$.ctor @ RVA 0x30E0BD8

void BCOICIIDFPD___ctor(BCOICIIDFPD_o *__this,GameUtils_OPCJEEFOCFB_o *IMMNELPBGIF,
                       MethodInfo *method)

{
  int32_t iVar1;
  Roster_o *__this_00;
  System_String_o *JLAFGLDIFOC;
  MCCHIAKPFEL_o *__this_01;
  System_String_o *KGLJICLJHEL;
  System_String_o **ppSVar2;
  int32_t *piVar3;
  
  if ((DAT_0456639d & 1) == 0) {
    FUN_01bab630(&MCCHIAKPFEL_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456639d = 1;
  }
  ppSVar2 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
  *ppSVar2 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    iVar1 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    piVar3 = &(__this->fields).HMHEEKFFCPL;
    *piVar3 = iVar1;
    (__this->fields).EHOFCENCPNF = iVar1 * 100;
    (__this->fields)._HFPMLGFDOKC_k__BackingField = (IMMNELPBGIF->fields).ADCKCMDHIHM;
    (__this->fields)._GDKBFEGNHNP_k__BackingField =
         (bool_conflict)((IMMNELPBGIF->fields).OAPLLNNEONM & 1);
    (__this->fields)._COIPKAKHDFP_k__BackingField = (IMMNELPBGIF->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04(ppSVar2);
    (__this->fields)._JHGGGMJEENP_k__BackingField = (IMMNELPBGIF->fields).GPOEEHGGIII;
    thunk_FUN_01c20e04();
    (__this->fields)._IANGGJCONIH_k__BackingField = (IMMNELPBGIF->fields).KPDPJONADPJ;
    thunk_FUN_01c20e04();
    KGLJICLJHEL = (IMMNELPBGIF->fields).JIJLBFGKNJK;
    JLAFGLDIFOC = System_Int32__ToString((int32_t)piVar3,(MethodInfo *)0x0);
    __this_01 = (MCCHIAKPFEL_o *)thunk_FUN_01bda818(MCCHIAKPFEL_TypeInfo);
    MCCHIAKPFEL___ctor(__this_01,KGLJICLJHEL,JLAFGLDIFOC,0,0,(MethodInfo *)0x0);
    (__this->fields)._BLIMDANKDIH_k__BackingField = __this_01;
    thunk_FUN_01c20e04(&__this->fields,__this_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30E0D68]
// BCOICIIDFPD$$.ctor @ RVA 0x30E0D68

void BCOICIIDFPD___ctor(BCOICIIDFPD_o *__this,MethodInfo *method)

{
  if ((DAT_0456639e & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456639e = 1;
  }
  (__this->fields)._COIPKAKHDFP_k__BackingField = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void IDAKIHLDMKG(string CJNHFNHJHPE)  [RVA 0x30E0DC0]
// BCOICIIDFPD$$IDAKIHLDMKG @ RVA 0x30E0DC0

void BCOICIIDFPD__IDAKIHLDMKG(BCOICIIDFPD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IANGGJCONIH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x30E0DC8]
// BCOICIIDFPD$$KCHJCGEMCGE @ RVA 0x30E0DC8

System_String_o * BCOICIIDFPD__KCHJCGEMCGE(BCOICIIDFPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public bool MFEJKIODMPN()  [RVA 0x30E0DD0]
// BCOICIIDFPD$$MFEJKIODMPN @ RVA 0x30E0DD0

bool BCOICIIDFPD__MFEJKIODMPN(BCOICIIDFPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._GDKBFEGNHNP_k__BackingField;
}


// ===== protected void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x30E0DD8]
// BCOICIIDFPD$$HCOCAAIGNNL @ RVA 0x30E0DD8

void BCOICIIDFPD__HCOCAAIGNNL(BCOICIIDFPD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void ABIKDJCCGJF(int CJNHFNHJHPE)  [RVA 0x30E0DE0]
// BCOICIIDFPD$$ABIKDJCCGJF @ RVA 0x30E0DE0

void BCOICIIDFPD__ABIKDJCCGJF(BCOICIIDFPD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HFPMLGFDOKC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool DNEACMPPKPC(int JLAFGLDIFOC)  [RVA 0x30E0DE8]
// BCOICIIDFPD$$DNEACMPPKPC @ RVA 0x30E0DE8

bool BCOICIIDFPD__DNEACMPPKPC(BCOICIIDFPD_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  if (JLAFGLDIFOC < (__this->fields).HMHEEKFFCPL) {
    return false;
  }
  return JLAFGLDIFOC <= (__this->fields).EHOFCENCPNF;
}


// ===== protected void INOKKGKNDAH(MCCHIAKPFEL CJNHFNHJHPE)  [RVA 0x30E0E0C]
// BCOICIIDFPD$$INOKKGKNDAH @ RVA 0x30E0E0C

void BCOICIIDFPD__INOKKGKNDAH(BCOICIIDFPD_o *__this,MCCHIAKPFEL_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BLIMDANKDIH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string HCKPJKIFILH()  [RVA 0x30E0E14]
// BCOICIIDFPD$$HCKPJKIFILH @ RVA 0x30E0E14

System_String_o * BCOICIIDFPD__HCKPJKIFILH(BCOICIIDFPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._JHGGGMJEENP_k__BackingField;
}


// ===== protected void CJIKGMDKGNP(bool CJNHFNHJHPE)  [RVA 0x30E0E1C]
// BCOICIIDFPD$$CJIKGMDKGNP @ RVA 0x30E0E1C

void BCOICIIDFPD__CJIKGMDKGNP(BCOICIIDFPD_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GDKBFEGNHNP_k__BackingField = CJNHFNHJHPE;
  return;
}

