// TypeDefIndex 3355
// Namespace: 
// [Serializable]
// private sealed class EPFMFHDGMCE.<>c
// Fields:
//   public static readonly EPFMFHDGMCE.<>c <>9; // 0x0
//   public static Comparison<EPFMFHDGMCE.JGKNDMCIPBN> <>9__13_0; // 0x8
//   public static Comparison<JLGNBOILFLN> <>9__27_0; // 0x10

// ===== internal int CBPJPIPIHDJ(EPFMFHDGMCE.JGKNDMCIPBN a, EPFMFHDGMCE.JGKNDMCIPBN b)  [RVA 0x35386B8]
// EPFMFHDGMCE.<>c$$CBPJPIPIHDJ @ RVA 0x35386B8

int32_t EPFMFHDGMCE_<>c__CBPJPIPIHDJ
                  (EPFMFHDGMCE___c_o *__this,EPFMFHDGMCE_JGKNDMCIPBN_o *a,
                  EPFMFHDGMCE_JGKNDMCIPBN_o *b,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((a != (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) && (b != (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0)) {
    iVar1 = System_Int32__CompareTo((int)a + 0x18,(b->fields).NOPGBJNLFHM,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35386E0]
// EPFMFHDGMCE.<>c$$.ctor @ RVA 0x35386E0

void EPFMFHDGMCE_<>c___ctor(EPFMFHDGMCE___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal int PEBHFJINOPA(JLGNBOILFLN a, JLGNBOILFLN b)  [RVA 0x35386E8]
// EPFMFHDGMCE.<>c$$PEBHFJINOPA @ RVA 0x35386E8

int32_t EPFMFHDGMCE_<>c__PEBHFJINOPA
                  (EPFMFHDGMCE___c_o *__this,JLGNBOILFLN_o *a,JLGNBOILFLN_o *b,MethodInfo *method)

{
  int32_t iVar1;
  int32_t local_4;
  
  if ((a != (JLGNBOILFLN_o *)0x0) && (local_4 = (a->fields).GHPHFGBIPCI, b != (JLGNBOILFLN_o *)0x0))
  {
    iVar1 = System_Int32__CompareTo((int32_t)&local_4,(b->fields).GHPHFGBIPCI,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3538718]
// EPFMFHDGMCE.<>c$$.cctor @ RVA 0x3538718

void EPFMFHDGMCE_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568aab & 1) == 0) {
    FUN_01bab630(&EPFMFHDGMCE_<>c_TypeInfo);
    DAT_04568aab = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(EPFMFHDGMCE_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  EPFMFHDGMCE_<>c_TypeInfo->static_fields->__9 = (EPFMFHDGMCE___c_o *)__this;
  thunk_FUN_01c20e04(EPFMFHDGMCE_<>c_TypeInfo->static_fields,__this);
  return;
}

