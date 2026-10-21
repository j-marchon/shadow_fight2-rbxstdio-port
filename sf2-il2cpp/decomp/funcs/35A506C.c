// Nekki.Utils.RaidBetaLogger$$TrySendDump @ RVA 0x35A506C

void Nekki_Utils_RaidBetaLogger__TrySendDump
               (Nekki_Utils_RaidBetaLogger_o *__this,System_String_o *IILEPKAGDGC,bool ECDLGJPEBEF,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)ECDLGJPEBEF;
                    /* try { // try from 036a5098 to 037a509b has its CatchHandler @ 036a50d0 */
                    /* try { // try from 036a50a0 to 037a50a3 has its CatchHandler @ 036a50bc */
                    /* try { // try from 036a50a8 to 037a50ab has its CatchHandler @ 036a50d0 */
  if ((!ECDLGJPEBEF) &&
     ((((__this->fields)._NOEPHKDKPNJ_k__BackingField != false ||
       ((__this->fields)._GCJCDAIIAJF_k__BackingField != false)) ||
      (bVar1 = Nekki_Utils_RaidBetaLogger__EFIKJMNBLOI(__this,(MethodInfo *)IILEPKAGDGC), !bVar1))))
  {
                    /* try { // try from 036a50b0 to 037a50b3 has its CatchHandler @ 036a50b8 */
                    /* try { // try from 036a50b4 to 037a50eb has its CatchHandler @ 036a4a64 */
                    /* catch() { ... } // from try @ 036a50b0 with catch @ 036a50b8 */
    return;
  }
                    /* try { // try from 036a508c to 037a5093 has its CatchHandler @ 036a50c4 */
  Nekki_Utils_RaidBetaLogger__CLIHAFJDHKO(__this,IILEPKAGDGC,method_00);
  return;
}

