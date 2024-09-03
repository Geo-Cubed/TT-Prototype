namespace GeoCubed.TTPrototype.UI.BlazorWASM.Models;

public class Step
{
    private readonly Item _event;
    private readonly long _count;

    public Step(Item stepEvent, long count)
    {
        this._event = stepEvent;
        this._count = count;
    }

    public double Square()
    {
        return this._event.Id * this._event.Id;
    }

    public double Root()
    {
        return Math.Sqrt(this._event.Id);
    }

    public long OngoingCount()
    {
        return this._count + this._event.Id;
    }
}
