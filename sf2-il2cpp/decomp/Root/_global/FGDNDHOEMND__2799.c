// TypeDefIndex 2799
// Namespace: 
// public class FGDNDHOEMND : IIMNGGHGKOD
// Fields:
//   private MBALPICJBHF AHCGNPCNCKJ; // 0x48

// ===== public MBALPICJBHF JOHDKCDCPBD()  [RVA 0x3419B08]
// FGDNDHOEMND$$JOHDKCDCPBD @ RVA 0x3419B08

MBALPICJBHF_o * FGDNDHOEMND__JOHDKCDCPBD(FGDNDHOEMND_o *__this,MethodInfo *method)

{
  return (__this->fields).AHCGNPCNCKJ;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3419B10]
// FGDNDHOEMND$$.ctor @ RVA 0x3419B10

void FGDNDHOEMND___ctor(FGDNDHOEMND_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  MBALPICJBHF_o *__this_00;
  MBALPICJBHF_o **ppMVar1;
  
  if ((DAT_045680bd & 1) == 0) {
    FUN_01bab630(&MBALPICJBHF_TypeInfo);
    DAT_045680bd = 1;
  }
  __this_00 = (MBALPICJBHF_o *)thunk_FUN_01bda818(MBALPICJBHF_TypeInfo);
  MBALPICJBHF___ctor(__this_00,(MethodInfo *)0x0);
  ppMVar1 = &(__this->fields).AHCGNPCNCKJ;
  *ppMVar1 = __this_00;
  thunk_FUN_01c20e04(ppMVar1,__this_00);
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,9,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03519b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3419BA0]
// FGDNDHOEMND$$HNIHOIAMDPC @ RVA 0x3419BA0

void FGDNDHOEMND__HNIHOIAMDPC
               (FGDNDHOEMND_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  MBALPICJBHF_o *__this_00;
  
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  __this_00 = (__this->fields).AHCGNPCNCKJ;
  if (__this_00 != (MBALPICJBHF_o *)0x0) {
    MBALPICJBHF__HNIHOIAMDPC(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DPGIIHOJJDE(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x3419BD8]
// FGDNDHOEMND$$DPGIIHOJJDE @ RVA 0x3419BD8

void FGDNDHOEMND__DPGIIHOJJDE(FGDNDHOEMND_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

