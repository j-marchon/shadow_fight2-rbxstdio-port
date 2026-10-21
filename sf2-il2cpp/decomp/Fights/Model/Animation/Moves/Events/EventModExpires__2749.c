// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Events.EventModExpires  (obfuscated DPNLDOJECPA)
// TypeDefIndex 2749
// Namespace: 
// public class EventModExpires : EventAnimation
// Fields:

// ===== public void .ctor()  [RVA 0x33F60E8]
// EventModExpires$$.ctor @ RVA 0x33F60E8

void EventModExpires___ctor(EventModExpires_o *__this,MethodInfo *method)

{
  EventAnimation___ctor((EventAnimation_o *)__this,0x10,(MethodInfo *)0x0);
  return;
}


// ===== public override bool DGCODECJJCC(ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x33F60F4]
// EventModExpires$$DGCODECJJCC @ RVA 0x33F60F4

bool EventModExpires__DGCODECJJCC(EventModExpires_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  
  if ((DAT_04567f96 & 1) == 0) {
    FUN_01bab630(&Method_KJFPGDFNFCL_AOKIANMEBCH<string>__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04567f96 = 1;
  }
  bVar1 = EventAnimation__DGCODECJJCC((EventAnimation_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (bVar1) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    b = (System_String_o *)
        EventAnimation__AOKIANMEBCH<object>
                  ((KDFMDHADHMD->fields).KOANCCDDBDA,
                   (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                   Method_KJFPGDFNFCL_AOKIANMEBCH<string>__);
    bVar1 = System_String__op_Equality((__this->fields).super.DHKOGAHJNMK,b,(MethodInfo *)0x0);
    bVar1 = bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

