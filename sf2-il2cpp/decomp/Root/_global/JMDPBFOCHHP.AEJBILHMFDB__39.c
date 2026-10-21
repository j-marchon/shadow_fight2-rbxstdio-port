// TypeDefIndex 39
// Namespace: 
// public class JMDPBFOCHHP.AEJBILHMFDB
// Fields:
//   public int APBGEFLPIFI; // 0x10
//   public string DFFIEFDCMJI; // 0x18
//   public int EKAPEBDBNPO; // 0x20
//   public List<JMDPBFOCHHP.CMLEEJPGHNC> NPPJFJBJLLG; // 0x28
//   public Dictionary<uint, JMDPBFOCHHP.AEJBILHMFDB.DFCNIHGANOH> BFODFJIGBHE; // 0x30

// ===== public void .ctor()  [RVA 0x2FF9A18]
// JMDPBFOCHHP.AEJBILHMFDB$$.ctor @ RVA 0x2FF9A18

void JMDPBFOCHHP_AEJBILHMFDB___ctor(JMDPBFOCHHP_AEJBILHMFDB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o **ppSVar1;
  System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *__this_01;
  System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ac3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_TypeInfo
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_TypeInfo);
    DAT_04565ac3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>__ctor__);
  ppSVar1 = &(__this->fields).NPPJFJBJLLG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<uint,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>__ctor__
            );
  ppSVar2 = &(__this->fields).BFODFJIGBHE;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

