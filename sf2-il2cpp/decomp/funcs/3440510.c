// InControl.UnityAnalogSource$$.ctor @ RVA 0x3440510

void InControl_UnityAnalogSource___ctor
               (InControl_UnityAnalogSource_o *__this,int32_t analogId,MethodInfo *method)

{
  MethodInfo *method_00;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03540528 to 0364052b has its CatchHandler @ 03540704 */
  (__this->fields).analogId = analogId;
                    /* try { // try from 03540534 to 0364054f has its CatchHandler @ 03540708 */
  InControl_UnityAnalogSource__SetupAnalogQueries(method_00);
  return;
}

