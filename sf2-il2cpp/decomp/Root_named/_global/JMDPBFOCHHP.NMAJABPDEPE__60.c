// TypeDefIndex 60
// Namespace: 
// public class RaidConfig.NMAJABPDEPE
// Fields:
//   public uint OIMHAENFHBJ; // 0x10
//   public uint BLGKNLLKCKM; // 0x14
//   public uint DCOMFGPIBOE; // 0x18
//   public uint OAFBLBIBJBG; // 0x1C
//   public Dictionary<int, RaidConfig.EBEGCDCOHHJ> HJGMOINDJAK; // 0x20

// ===== public void .ctor()  [RVA 0x2FFB5AC]
// RaidConfig.NMAJABPDEPE$$.ctor @ RVA 0x2FFB5AC

void RaidConfig_NMAJABPDEPE___ctor(RaidConfig_NMAJABPDEPE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_EBEGCDCOHHJ__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ad6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_TypeInfo);
    DAT_04565ad6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>__ctor__);
  ppSVar1 = &(__this->fields).HJGMOINDJAK;
  *ppSVar1 = (System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_EBEGCDCOHHJ__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

