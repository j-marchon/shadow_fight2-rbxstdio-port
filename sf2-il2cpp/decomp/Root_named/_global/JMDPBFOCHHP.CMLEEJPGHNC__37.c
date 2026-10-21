// TypeDefIndex 37
// Namespace: 
// public class RaidConfig.CMLEEJPGHNC
// Fields:
//   public int NEKMDLBLENC; // 0x10
//   private string APBICPEOMOM; // 0x18
//   public int ONGLGHIKBJF; // 0x20
//   public bool IGFBDMOAFDO; // 0x24
//   public int AKAGFOOMLFB; // 0x28
//   public Dictionary<int, RaidConfig.HKDMLOKOJPH> MOJCKKMAKOE; // 0x30
//   public RaidConfig.NCAGOHHFFFN EBKAKMIFOEB; // 0x38
//   public RaidConfig.OJADNDJAKOA MGBLNNPBHGP; // 0x40

// ===== public string DNOMHOGFIFO()  [RVA 0x2FF9960]
// RaidConfig.CMLEEJPGHNC$$DNOMHOGFIFO @ RVA 0x2FF9960

System_String_o *
RaidConfig_CMLEEJPGHNC__DNOMHOGFIFO(RaidConfig_CMLEEJPGHNC_o *__this,MethodInfo *method)

{
  return (__this->fields).APBICPEOMOM;
}


// ===== public void FFHJDGPNCKJ(string CJNHFNHJHPE)  [RVA 0x2FF9968]
// RaidConfig.CMLEEJPGHNC$$FFHJDGPNCKJ @ RVA 0x2FF9968

void RaidConfig_CMLEEJPGHNC__FFHJDGPNCKJ
               (RaidConfig_CMLEEJPGHNC_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  pSVar1 = OFFIONDOEPM__CNLBHLNMCCI(CJNHFNHJHPE,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).APBICPEOMOM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void .ctor()  [RVA 0x2FF9990]
// RaidConfig.CMLEEJPGHNC$$.ctor @ RVA 0x2FF9990

void RaidConfig_CMLEEJPGHNC___ctor(RaidConfig_CMLEEJPGHNC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ac2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_TypeInfo);
    DAT_04565ac2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>__ctor__);
  ppSVar1 = &(__this->fields).MOJCKKMAKOE;
  *ppSVar1 = (System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

