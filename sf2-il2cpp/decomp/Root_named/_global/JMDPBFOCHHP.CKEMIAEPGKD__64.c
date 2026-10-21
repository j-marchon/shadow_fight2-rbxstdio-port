// TypeDefIndex 64
// Namespace: 
// public class RaidConfig.CKEMIAEPGKD
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public string KBOFABJIPPD; // 0x18
//   public string BPCADJLKKGA; // 0x20
//   public long LKENIPBKAJI; // 0x28
//   public long PMHJGJHCNHE; // 0x30
//   public bool HKKGMGDDCOD; // 0x38
//   public string EGMPFEOGKOF; // 0x40
//   public string DFHEHPGHMLF; // 0x48
//   public string DPNFGBFFNAJ; // 0x50
//   public string POLMCBLGCFH; // 0x58
//   public string MNHCNNMLFNO; // 0x60
//   public string KMMIHCHCNDM; // 0x68
//   public int JIALOHAOPAO; // 0x70
//   public List<RaidConfig.EEJFKIEGDPH> GPNNHMIJLGL; // 0x78

// ===== public void .ctor()  [RVA 0x2FFB788]
// RaidConfig.CKEMIAEPGKD$$.ctor @ RVA 0x2FFB788

void RaidConfig_CKEMIAEPGKD___ctor(RaidConfig_CKEMIAEPGKD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ada & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_TypeInfo);
    DAT_04565ada = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>__ctor__);
  ppSVar1 = &(__this->fields).GPNNHMIJLGL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

