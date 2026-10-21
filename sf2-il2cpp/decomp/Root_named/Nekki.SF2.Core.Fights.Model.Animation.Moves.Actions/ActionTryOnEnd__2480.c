// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Actions.ActionTryOnEnd  (obfuscated JEEIHDPGJKF)
// TypeDefIndex 2480
// Namespace: 
// public class ActionTryOnEnd : ActionAnimation
// Fields:

// ===== public override void DPGIIHOJJDE(Model BCKBBGCOMJD)  [RVA 0x3372D6C]
// ActionTryOnEnd$$DPGIIHOJJDE @ RVA 0x3372D6C

void ActionTryOnEnd__DPGIIHOJJDE(ActionTryOnEnd_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    Model__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3372D8C]
// ActionTryOnEnd$$HNIHOIAMDPC @ RVA 0x3372D8C

void ActionTryOnEnd__HNIHOIAMDPC
               (ActionTryOnEnd_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  ActionAnimation__HNIHOIAMDPC((ActionAnimation_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3372D94]
// ActionTryOnEnd$$.ctor @ RVA 0x3372D94

void ActionTryOnEnd___ctor(ActionTryOnEnd_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
                    /* try { // try from 03472da8 to 03572dcb has its CatchHandler @ 03472eec */
  ActionAnimation___ctor((ActionAnimation_o *)__this,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03472dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}

