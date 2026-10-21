// TypeDefIndex 210
// Namespace: 
// public class KJBGNIGNECD.AHICALNEICM : IComparable<KJBGNIGNECD.AHICALNEICM>
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public int NOPGBJNLFHM; // 0x18

// ===== public void .ctor(string KGLJICLJHEL, int JLAFGLDIFOC)  [RVA 0x311ED7C]
// KJBGNIGNECD.AHICALNEICM$$.ctor @ RVA 0x311ED7C

void KJBGNIGNECD_AHICALNEICM___ctor
               (KJBGNIGNECD_AHICALNEICM_o *__this,System_String_o *KGLJICLJHEL,int32_t JLAFGLDIFOC,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).JIJLBFGKNJK = KGLJICLJHEL;
  thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
  (__this->fields).NOPGBJNLFHM = JLAFGLDIFOC;
  return;
}


// ===== public int CompareTo(KJBGNIGNECD.AHICALNEICM IBKIPBJJCPG)  [RVA 0x311F338]
// KJBGNIGNECD.AHICALNEICM$$CompareTo @ RVA 0x311F338

int32_t KJBGNIGNECD_AHICALNEICM__CompareTo
                  (KJBGNIGNECD_AHICALNEICM_o *__this,KJBGNIGNECD_AHICALNEICM_o *IBKIPBJJCPG,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if (IBKIPBJJCPG != (KJBGNIGNECD_AHICALNEICM_o *)0x0) {
    iVar1 = System_Int32__CompareTo
                      ((int)__this + 0x18,(IBKIPBJJCPG->fields).NOPGBJNLFHM,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

