// TypeDefIndex 2480
// Namespace: 
// public class JEEIHDPGJKF : IIMNGGHGKOD
// Fields:

// ===== public override void DPGIIHOJJDE(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x3372D6C]
// JEEIHDPGJKF$$DPGIIHOJJDE @ RVA 0x3372D6C

void JEEIHDPGJKF__DPGIIHOJJDE(JEEIHDPGJKF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3372D8C]
// JEEIHDPGJKF$$HNIHOIAMDPC @ RVA 0x3372D8C

void JEEIHDPGJKF__HNIHOIAMDPC
               (JEEIHDPGJKF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3372D94]
// JEEIHDPGJKF$$.ctor @ RVA 0x3372D94

void JEEIHDPGJKF___ctor(JEEIHDPGJKF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
                    /* try { // try from 03472da8 to 03572dcb has its CatchHandler @ 03472eec */
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03472dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}

